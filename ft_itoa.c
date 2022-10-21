/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryadi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 16:37:44 by oryadi            #+#    #+#             */
/*   Updated: 2022/10/21 16:37:46 by oryadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static    int    ft_len(long int nb)
{
    int    i;

    i = 0;
    if(nb == 0)
        i++;
    while (nb)
    {
        nb /= 10;
        i++;
    }
    return (i);
}

static    int    ft_check(int nb)
{
    if (nb < 0)
    {
        nb *= -1;

        return (1);
    }
    return (0);
}

char    *int_min(int n)
{
    int len;
    unsigned int nb;
    char    *str;

    len = ft_len(n) + 1;
    nb = -n;
    str = malloc(sizeof(char) * (len + 1));
    str[0] = '-';
    str[len] = '\0';
    while (nb >= 1)
    {
        str[--len] = nb % 10 + '0';
        nb /= 10; 
    }
    return (str);
}

char    *ft_itoa(int n)
{
    char        *str;
    char        c;
    int            len;
    unsigned int  nb;

    len = 0;
    c = '-';
    nb = n;
    if (n < 0)
    {
        len++;
        nb *= -1;
    }
    len += ft_len(n);
    str = malloc(sizeof (char) * (len +1));
    if (!str)
        return (0);
    if (n == -2147483648)
        return (int_min(n));
    str[len] = '\0';
    if (n == 0)
    {
        str[0] = '0';
    }
    if (ft_check(n) == 1)
        str[0] = c;
    while (nb > 0)
    {
        str[--len] = nb % 10 + '0';
        nb /= 10;
    }
    return (str);
}
