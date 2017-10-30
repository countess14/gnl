/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iryouni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 14:24:30 by iryouni           #+#    #+#             */
/*   Updated: 2016/11/19 12:04:17 by iryouni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*d;
	char	*s;
	size_t	n;

	n = 0;
	d = (char *)dst;
	s = (char *)src;
	if (d < s)
		while (n < len)
		{
			d[n] = s[n];
			n++;
		}
	else if (d > s)
	{
		n = len;
		while (n > 0)
		{
			d[n - 1] = s[n - 1];
			n--;
		}
	}
	return (dst);
}
