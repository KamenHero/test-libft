/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryadi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:44:14 by oryadi            #+#    #+#             */
/*   Updated: 2022/10/24 15:44:16 by oryadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		write (fd, "-2147483648", 11);
	else if (n < 0)
	{
		n *= -1;
		write (fd, "-", 1);
		ft_putnbr_fd(n, fd);
	}
	else if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else
		ft_putchar_fd(n + '0', fd);
}
// #include <fcntl.h>

// int main()
// {
// 	FILE	*f = fopen("c.txt", "w");
// 		ft_putnbr_fd(512, 3);
// 		ft_putchar_fd('\n', 3);
// 		ft_putstr_fd("hello\n", 3);
// 	FILE	*d = fopen("d.txt", "w");
// 		ft_putnbr_fd(124, 4);
// 		ft_putchar_fd('\n', 4);
// 		ft_putstr_fd("finish", 4);
// 	fclose(d);
// 	fclose(f);
// 	int fd= open("tds.txt", O_CREAT | O_RDONLY | O_WRONLY, 777);
// 	ft_putnbr_fd(121561, fd);
// 	ft_putchar_fd('\n', fd);
// 	ft_putstr_fd("finish", fd);
// }