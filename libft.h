/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryadi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 11:36:45 by oryadi            #+#    #+#             */
/*   Updated: 2022/10/14 11:36:47 by oryadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef LIBFT_H
# define LIBFT_H

#include <unistd.h>
#include <stdio.h>
void	*ft_memset(void *b,int c, size_t len);
size_t  ft_strlen(const char *s);

# define RED        "\033[31m"
# define GREEN        "\033[32m"
# define DEFAULT    "\033[0m"
# define BLUE        "\033[0;34m"

#endif
