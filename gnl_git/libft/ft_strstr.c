/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iryouni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 12:33:31 by iryouni           #+#    #+#             */
/*   Updated: 2016/11/21 13:36:02 by iryouni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *where, const char *tofind)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (!tofind[0] || !tofind)
		return ((char *)where);
	while (where[i])
	{
		j = 0;
		while (where[i + j] == tofind[j])
		{
			if (tofind[j + 1] == 0)
				return ((char *)&where[i]);
			j++;
		}
		i++;
	}
	return (0);
}
