/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iryouni <iryouni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/10 15:38:21 by iryouni           #+#    #+#             */
/*   Updated: 2017/10/30 11:43:47 by iryouni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <stdio.h>
#include "get_next_line.h"

static int	rest(char **stockk, char **line)
{
	char	*tmp;
	char	*cleaner;

	if ((tmp = ft_strchr(*stockk, '\n')))
	{
		// ft_putstr("rest 1\n");
		// ft_putstr(*stockk);
		*tmp = 0;
		ft_strdel(line);
		*line = ft_strdup(*stockk);
		cleaner = *stockk;
		*stockk = ft_strdup(tmp + 1);
		ft_strdel(&cleaner);
		// ft_putstr(*stockk);
		return (1);
	}
	else
	{
		// ft_putstr("rest 2\n");
		// ft_putstr(*stockk);
		*line = ft_strjoin(*stockk, *line);
		ft_strdel(stockk);
		return (0);
	}
	return (0);
}

static int	search(char *buffer, char **line, char ** stockk)
{
	char	*tmp;
	char	*cleaner;

	tmp = NULL;
	// ft_putstr("search 1\n");
	if ((tmp = ft_strchr(buffer, '\n')))
	{
		// ft_putstr("search 2\n");
		*tmp = 0;
		*stockk = ft_strdup(tmp + 1);
		cleaner = *line;
		*line = ft_strjoin(*line, buffer);
		free(cleaner);
		// ft_putstr(*stockk);
		return (1);
	}
	else
	{
		cleaner = *line;
		*line = ft_strjoin(*line, buffer);
		free(cleaner);
		return (0);
	}
}

int			get_next_line(const int fd, char **line)
{
	static char			*stockk = NULL;
	char				*buffer;
	int					ret;
	int					count;

	if (fd < 0 || fd > FD_MAX || BUFF_SIZE <= 0 || !line)
		return (-1);
	*line = ft_strdup("");
	count = 0;
	if (stockk && stockk[0])
	{
	 	if (rest(&stockk, line))
			return (1);
		count++;
	}
	buffer = ft_strnew(BUFF_SIZE + 1);
	while ((ret = read(fd, buffer, BUFF_SIZE)) > 0)
	{
		count++;
		// ft_putstr("while 1\n");
		buffer[ret] = 0;
		if ((search(buffer, line, &stockk)))
			break;
	}
	free(buffer);
	return (count + ret > 0 ? 1 : ret);
}
