/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iryouni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 10:09:29 by iryouni           #+#    #+#             */
/*   Updated: 2016/11/18 12:32:27 by iryouni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	long long int nbr;

	nbr = n;
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr = (nbr * -1);
	}
	if (nbr > 9)
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
		nbr++;
	}
	if (nbr <= 9 && nbr >= 0)
		ft_putchar(nbr + 48);
}
