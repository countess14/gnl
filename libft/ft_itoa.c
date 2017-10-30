/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iryouni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 14:02:46 by iryouni           #+#    #+#             */
/*   Updated: 2016/11/20 17:02:50 by iryouni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		count_int(int nb)
{
	int				i;
	int				neg;
	long long int	n;

	n = nb;
	i = 0;
	neg = 0;
	if (n < 0)
	{
		neg++;
		n = -n;
	}
	while (n /= 10)
		i++;
	if (neg)
		i++;
	i++;
	return (i);
}

char			*ft_itoa(int n)
{
	char			*buff;
	int				i;
	int				negative;
	long long int	nb;

	nb = n;
	i = 0;
	negative = (nb < 0) ? 1 : 0;
	if ((buff = ft_strnew(count_int(nb))) == NULL)
		return (buff);
	if (nb == -2147483648)
		buff = ft_strdup("-2147483648");
	if (nb == -2147483648)
		return (buff);
	if (negative)
		buff[0] = '-';
	nb = negative ? -(nb) : nb;
	i = count_int(nb) - 1;
	while (i >= 0)
	{
		buff[i-- + negative] = (nb % 10) + 48;
		nb /= 10;
	}
	buff[ft_strlen(buff)] = 0;
	return (buff);
}
