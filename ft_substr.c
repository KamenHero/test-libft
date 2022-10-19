/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryadi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 11:04:15 by oryadi            #+#    #+#             */
/*   Updated: 2022/10/19 11:04:16 by oryadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	i = 0;
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	if (start >= ft_strlen(s))
		len = 0;
	substr = malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (0);
	if (start > ft_strlen(s))
	{
		substr[i] = '\0';
		return (substr);
	}
	while (s[start])
	{
		substr[i] = s[start];
		start++;
		i++;
	}
	substr[len] = '\0';
	return (substr);
}
