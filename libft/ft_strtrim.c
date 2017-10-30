/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iryouni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 16:08:48 by iryouni           #+#    #+#             */
/*   Updated: 2016/11/19 16:16:37 by iryouni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	leftindex(char const *s)
{
	int i;

	i = 0;
	while (s[i] && ((s[i] == ' ') || (s[i] == '\n') || (s[i] == '\t')))
		i++;
	return (i);
}

static int	rightindex(char const *s)
{
	int j;

	j = ft_strlen(s);
	j--;
	while (s[j] && ((s[j] == ' ') || (s[j] == '\n') || (s[j] == '\t')))
		j--;
	return (j);
}

char		*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	int		k;
	char	*dst;

	if (!s)
		return (ft_strnew(0));
	i = leftindex(s);
	j = rightindex(s);
	k = 0;
	dst = (char *)malloc(sizeof(char) * (j - i + 1));
	if (!dst)
		return (ft_strnew(0));
	while (i <= j)
	{
		dst[k] = s[i];
		k++;
		i++;
	}
	dst[k] = 0;
	return (dst);
}
