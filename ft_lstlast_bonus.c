/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryadi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 15:54:25 by oryadi            #+#    #+#             */
/*   Updated: 2022/10/30 15:54:27 by oryadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

// int main()
// {
// 	t_list	*temp;

// 	temp = 0;
// 	ft_lstadd_front(&temp, ft_lstnew(ft_strdup("oussama")));
// 	ft_lstadd_back(&temp, ft_lstnew(ft_strdup("ryadi")));
// 	ft_lstadd_back(&temp, ft_lstnew(ft_strdup("45456")));
// 	ft_lstadd_back(&temp, ft_lstnew(ft_strdup("45151")));
// 	temp = ft_lstlast(temp);
// 	printf("%s",temp->content);
// }
