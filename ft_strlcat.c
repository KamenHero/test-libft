/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryadi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 11:26:32 by oryadi            #+#    #+#             */
/*   Updated: 2022/10/15 11:26:33 by oryadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t i;
	size_t lensrc;
	size_t lendst;

	i = 0;
	lendst = ft_strlen(dst);
	lensrc = ft_strlen(src);

	if (dstsize != 0)
	{
		while (src && i < dstsize - lendst - 1)
		{
			dst[lendst + i] = src[i];
			i++;
		}
		dst[lendst + 1] = '\0';
	}
	return (lensrc + lendst);
}
