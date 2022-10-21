/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryadi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 13:46:14 by oryadi            #+#    #+#             */
/*   Updated: 2022/10/16 13:46:15 by oryadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0 || (unsigned char *)s1 == (unsigned char *)s2)
		return (0);
	while (i < n)
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		i++;
	}
	return (0);
}

// #include <string.h>
// int main()
// {
// 	char *s1 = "\xff\xaa\xde\x12";
//         char *s2 = "\xff\xaa\xde\x12MACOSAAAAA";
// 		printf("%d\n",ft_memcmp(s1,s2,4));
// 		printf("%d",memcmp(s1,s2,4));
// 		return 0;
// }