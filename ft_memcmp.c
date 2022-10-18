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

int	memcmp(const void *s1, const void *s2, size_t n)
{
	size_t i;

	i = 0;
	while(i < n && ((unsigned char *)s1)[i] && ((unsigned char *)s2)[i] 
		&& ((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
	{
		i++;
	}
	return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
}
