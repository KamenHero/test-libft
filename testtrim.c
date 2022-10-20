/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testtrim.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryadi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 15:03:31 by oryadi            #+#    #+#             */
/*   Updated: 2022/10/20 15:03:35 by oryadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_check(char const *s1, char const *set, size_t i)
{
	size_t	j;

	j = 0;
	while (set[j] != '\0')
	{
		if (s1[i] != set[j])
			j++;
		else
			return (1);
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	*str;

	i = 0;
	j = ft_strlen(s1);
	k = 0;
	while (i < j)
	{
		while (ft_check(s1, set, i) == 1)
			i++;
	}
	while (j > 0)
	{	
		while (ft_check(s1, set, j) == 1)
			j--;
	}
	str = malloc(sizeof (char) * ((j - i) + 1));
	while (i < j)
	{
		str[k] = s1[i];
		k++;
		i++;
	}
	str[k] = '\0';
	return (str);
}
