/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryadi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 16:37:44 by oryadi            #+#    #+#             */
/*   Updated: 2022/10/21 16:37:46 by oryadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_len(long int nb)
{
	int	i;

	i = 0;
	while (nb)
	{
		nb /= 10;
		i++;
	}
	return (i);
}

int	ft_check(long int nb, char c)
{
	if (nb < 0)
	{
		nb *= -1;
		c = '-';
		return (1);
	}
	return (0);
}

char	*ft_itoa(int n)
{
	char		*str;
	char		c;
	long int	nb;
	int			len;
	int			i;

	len = 0;
	i = 0;
	c = 'c';
	nb = n;
	if (nb < 0)
		len++;
	len += ft_len(nb);
	str = malloc(sizeof (char) * (len +1));
	str[len] = '\0';
	while (nb != 0)
	{
		if (ft_check(n, c) == 1)
		{
			str[0] = c;
		}
		str[--len] = (nb % 10) + '0';
		nb /= 10;
	}
	return (str);
}
