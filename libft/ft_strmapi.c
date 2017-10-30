/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iryouni <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/19 17:09:43 by iryouni           #+#    #+#             */
/*   Updated: 2016/11/19 17:09:46 by iryouni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		i;
	int		j;
	int		t;

	i = 0;
	j = 0;
	t = 0;
	if (!s || !f)
		return (NULL);
	while (s[i])
		i++;
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	while (s[j])
	{
		str[t] = (*f)(j, s[j]);
		j++;
		t++;
	}
	str[t] = 0;
	return (str);
}
