/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iryouni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/19 17:02:30 by iryouni           #+#    #+#             */
/*   Updated: 2016/11/19 17:02:33 by iryouni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*src;
	unsigned char	new;

	src = (void *)s;
	new = c;
	while (n > 0)
	{
		if (*src == new)
			return ((void *)src);
		src++;
		n--;
	}
	return (NULL);
}
