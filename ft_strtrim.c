/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryadi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 13:29:19 by oryadi            #+#    #+#             */
/*   Updated: 2022/10/20 13:29:21 by oryadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	ft_skip(char const*s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	lens1;

	j = 0;
	i = 0;
	lens1 = ft_strlen(s1);
	while (i < lens1)
	{
		while (s1[i] == set[j])
			j++;
		i++;
		j = 0;
	}
	return (i);
}

static size_t	ft_skiprev(char const*s1, char const *set)
{
	size_t	j;
	size_t	lens1;

	j = 0;
	lens1 = ft_strlen(s1);
	while (lens1 > 0)
	{
		while (s1[lens1] == set[j])
			j++;
		if (s1[lens1] != set[j])
			return (lens1);
		lens1--;
		j = 0;
	}
	return (lens1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	len;
	size_t	i;
	char	*str;

	i = 0;
	start = ft_skip(s1, set);
	len = ft_skiprev(s1, set);
	str = malloc(sizeof(char) * ((len - start) + 1));
	while (i < len)
	{
		str[i] = s1[start];
		i++;
		start++;
	}
	str[i] = '\0';
	return (str);
}
