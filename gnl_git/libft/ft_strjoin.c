/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iryouni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 07:39:35 by iryouni           #+#    #+#             */
/*   Updated: 2017/06/20 20:58:02 by iryouni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*dst;

	i = 0;
	j = 0;
	dst = (char *)ft_memalloc(sizeof(char)
			* ((s1 ? ft_strlen(s1) : 0) + (s2 ? ft_strlen(s2) : 0) + 1));
	if (!dst)
		return (NULL);
	while (s1 && s1[i])
	{
		dst[i] = s1[i];
		i++;
	}
	while (s2 && s2[j])
	{
		dst[i] = s2[j];
		i++;
		j++;
	}
	return (dst);
}
