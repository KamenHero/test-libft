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
	while (str[i] && str[i] == c)
		i++;
	return (i);
}

int	ft_len(const char *str, char c, int len)
{
	int	i;

	i = 0;
	while (str[len] && str[len++] != c)
		i++;
	return (i);
}

int	ft_fstr(const char *s, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		while (s[i] != '\0' && s[i] == c)
			i++;
		if (!s[i])
			break ;
		while (s[i] != '\0' && s[i] != c)
			i++;
		j++;
	}
	return (j);
}

char	**ft_free_str(char **str, size_t i)
{
	while (i > 0)
	{
		free(str[i - 1]);
		i--;
	}
	free(str);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	start;
	size_t	j;
	char	**str;
	size_t	len;

	i = 0;
	start = 0;
	len = 0;
	j = 0;
	str = ft_calloc ((ft_fstr (s, c) + 1), sizeof (char *));
	if (!str)
		return (0);
	while (start + len < ft_strlen(s))
	{
		start = sstart(s, c, start + len);
		len = ft_len(s, c, start);
		str[i] = ft_substr(s, start, len);
		if (!str[i])
			return (ft_free_str(str, i));
		if (!s[sstart(s, c, start + len)])
			break ;
		i++;
	}
	return (str);
}
