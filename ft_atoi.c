/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryadi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 14:30:17 by oryadi            #+#    #+#             */
/*   Updated: 2022/10/16 14:30:19 by oryadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	ft_atoi(const char *str)
{
	int i;
	int sign;
	int result;

	i = 0;
	sign = 1;
	result = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-')
	{
		sign = sign * -1;
		i++;
	}
	else if(str[i] == '+')
		i++;
	while(str[i] >= 48 && str[i] <= 57)
	{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (sign * result);
}

#include <stdio.h>

// int main()
// {
// 	char *s= "    			-543878872572572572857287287287287257287 ";
// 	printf("%d\n",ft_atoi(s));
// 	printf("%d\n",atoi(s));
// 	return (0);
// }
