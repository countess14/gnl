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
		*tmp = 0;
		ft_strdel(line);
		*line = ft_strdup(*stockk);
		ft_strdel(stockk);
		*stockk = ft_strdup(tmp + 1);
		return (1);
	}
	else if (ft_strchr(*stockk, '\0'))
	{
		cleaner = *line;
		*line = ft_strjoin(*stockk, *line);
		free(cleaner);
		ft_strdel(stockk);
		return (1);
	}
	return (0);
}

static int	search(char *buffer, char **line, char ** stockk   )
{
	char	*tmp;
	char	*cleaner;

	tmp = NULL;
	if ((tmp = ft_strchr(buffer, '\n')))
	{
		*tmp = 0;
		cleaner = *line;
		*line = ft_strjoin(*stockk, *line);
		free(cleaner);
		ft_strdel(stockk);
		*stockk = ft_strdup(tmp + 1);
		cleaner = *line;
		*line = ft_strjoin(*line, buffer);
		free(cleaner);
		free(buffer);
		return (1);
	}
	return (0);
}

static int	join_end(char *stockk, int ret, char *buffer, char **line)
{
	char	*cleaner;

	if (!stockk && *buffer && ret < BUFF_SIZE)
	{
		cleaner = *line;
		*line = ft_strjoin(*line, buffer);
		free(cleaner);
		free(buffer);
		return (1);
	}
	return (0);
}

int			get_next_line(const int fd, char **line)
{
	static char			*stockk = NULL;
	char				*buffer;
	char				*cleaner;
	int					ret;

	if (fd < 0 || fd > FD_MAX || BUFF_SIZE <= 0 || !line)
		return (-1);
	buffer = ft_strnew(8192);
	*line = ft_strdup("");
	while ((!stockk || *stockk == '\0' || !ft_strchr(stockk, '\n')) \
			&& (ret = read(fd, buffer, BUFF_SIZE)) > 0)
	{
		buffer[ret] = 0;
		if ((search(buffer, line, &stockk)))
			return (1);
		else if ((join_end(stockk, ret, buffer, line)))
			return (1);
		cleaner = *line;
		*line = ft_strjoin(*line, buffer);
		free(cleaner);
	}
	if (stockk && stockk[0])
		return (rest(&stockk, line));
	free(buffer);
	return (ret);
}
