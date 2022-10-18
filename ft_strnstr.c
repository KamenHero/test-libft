/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryadi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 14:09:45 by oryadi            #+#    #+#             */
/*   Updated: 2022/10/16 14:09:46 by oryadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	if (ft_strlen(needle) == 0)
		return ((char *)haystack);
	while(i < len)
	{
		while(haystack[i + j] == needle[j])
		{
			j++;
			if (needle[j] != '\0')
				return ((char *)&haystack[i]);
		}
		j = 0;
		i++;
	}
	return (0);
}


// int main(void)
// {
// 	printf("%s\n", ft_strnstr("ur", "iamurfather", 5));
// }
