/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryadi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 14:01:05 by oryadi            #+#    #+#             */
/*   Updated: 2022/10/15 14:01:06 by oryadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


char	*ft_strrchr(const char *s, int c)
{
	int i;

	i = ft_strlen(s);
	while (s[i] != 0)
	{
		if (s[i] == c)
			return (&s[i]);
		i--;
	}
	return (0);
}

