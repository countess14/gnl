/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iryouni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 17:26:01 by iryouni           #+#    #+#             */
/*   Updated: 2016/11/21 13:05:02 by iryouni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t			s;
	unsigned int	t;
	unsigned int	p;

	s = 0;
	t = 0;
	t = ft_strlen(src);
	p = ft_strlen(dst);
	if (!size)
		return (t);
	while (dst[s] && s < size)
		s++;
	t += s;
	if (size - 1 > p)
		ft_strncat(dst, (char *)src, size - p - 1);
	return (t);
}
