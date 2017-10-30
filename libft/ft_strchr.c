/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iryouni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 14:49:55 by iryouni           #+#    #+#             */
/*   Updated: 2016/11/18 13:47:08 by iryouni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	n;

	i = 0;
	n = c;
	while (i <= ft_strlen((char *)s))
	{
		if (s[i] == n)
			return ((char *)&s[i]);
		i++;
	}
	return (NULL);
}
