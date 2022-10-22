/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryadi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 18:09:22 by oryadi            #+#    #+#             */
/*   Updated: 2022/10/21 18:09:23 by oryadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	sstart(const char *str, char c, int i)
{
	while (str[i] == c)
		i++;
	return (i);
}

int	ft_len(const char *str, char c, int len)
{
	while (str[len] != c)
		len++;
	return (len);
}

int	ft_fstr(const char *str, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] == c)
	{
		while (str[i] != c)
		{
			if ((str[i] != c && str[i -1] == c) || (str[0] != c))
				j++;
			i++;
		}
		i++;
	}
	return (j);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		start;
	int		len;
	char	**str;

	i = 0;
	start = 0;
	len = 0;
	len += start;
	**str = malloc(sizeof (char) * (ft_fstr(s, c) + 1));
	while (s[len] != '\0')
	{
		sstart(s, c, start);
		len += start;
		ft_len(s, c, len);
		*str[i] = *ft_substr(s, start, len + start);
		start += len;
		i++;
	}
	return (str);
}
