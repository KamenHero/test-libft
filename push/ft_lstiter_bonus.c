/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryadi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 15:57:12 by oryadi            #+#    #+#             */
/*   Updated: 2022/10/30 15:57:15 by oryadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst == NULL)
		return ;
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}

// void toupp(void *content)
// {
// 	int i;
// 	char *str;

// 	i = 0;
// 	str = content;
// 	while (str[i])
// 	{
// 		str[i] = ft_toupper(str[i]);
// 		i++;
// 	}
// }

// int main()
// {
// 	t_list *lst ;

// 	lst = 0;
// 	ft_lstadd_front(&lst, ft_lstnew(ft_strdup("oussama")));
// 	ft_lstiter(lst,toupp);
// 	printf("%s",lst->content);
// 	return (0);
// }
