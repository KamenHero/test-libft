/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryadi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 21:00:46 by oryadi            #+#    #+#             */
/*   Updated: 2022/10/20 21:00:48 by oryadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int	len;
	int	i;
	char	*str;
	char	c;
	int	j;

	len = 0;
	i = 0;
	if (n < 0)
	{
		n *= -1;
		len++;
		c = '-';
	}
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	str = malloc(sizeof (char) * (len +1));
	while (str[i] != '\0')
	{
		if (i == 0 && c == '-')
		{
			str[i] = c;
			i++;
		}
		n = n * 10;
		j = n * 10;
		str[i] = (j / 10) - '0';
		i++;
	}
	str[i] = '\0';
	return (str);
}
