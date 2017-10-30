/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iryouni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 13:40:07 by iryouni           #+#    #+#             */
/*   Updated: 2016/11/19 14:02:31 by iryouni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char			*d;
	unsigned char	*s;
	unsigned char	new;

	d = dst;
	s = (void *)src;
	new = c;
	while (n > 0)
	{
		*d = *s;
		d++;
		if (*s == new)
			return (d);
		s++;
		n--;
	}
	return (NULL);
}
