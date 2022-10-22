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

int    ft_fstr(const char *str, char c)
{
    int    i;
    int    j;

    i = 0;
    j = 0;
	while (str[i] != '\0')
	{
		if ((str[0] != c) || (str[i] != c && str[i -1] == c))
                j++;
		i++;
	}
	return (j);
}

// int ft_fstr2(const char *str, char c)
// {
//     int    i;
//     int    j;

//     while (str[i] != '\0')
//     {
//         i = ft_fstr(str, c);
//         while(str[i] == c)
//         {
//             if ((str[i] != c && str[i -1] == c) || (str[0] != c))
//                 j++;
//             if (str[i] != '\0')
//                 return(j);
//             return (i);
//             i++;
//         }
//         i++;
//     }
//     return (0);
// }

char	**ft_split(char const *s, char c)
{
	int		i;
	int		start;
	int		j;
	char	**str;
	int		len;


	i = 0;
	start = 0;
	len = 0;
	j = 0; 
	str = ft_calloc((ft_fstr(s, c) + 1),sizeof (char*) );
	if (!str)
		return (0);
	while (j < (int)ft_strlen(s))
	{
		start = sstart(s, c, j);
		len = ft_len(s , c, start + j);
		str[i] = ft_substr(s, j + start, len);
		j += start + len;
		i++;
	}
	return (str);
}
