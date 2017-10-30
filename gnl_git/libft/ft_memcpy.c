/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iryouni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 16:15:01 by iryouni           #+#    #+#             */
/*   Updated: 2016/11/19 14:20:12 by iryouni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char			*dst;
	char			*sr;
	unsigned int	i;

	dst = (char *)dest;
	sr = (char *)src;
	i = 0;
	while (i < n)
	{
		dst[i] = sr[i];
		i++;
	}
	return (dst);
}
