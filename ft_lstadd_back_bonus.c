/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryadi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 15:36:57 by oryadi            #+#    #+#             */
/*   Updated: 2022/10/30 15:36:59 by oryadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	temp = *lst;
	if (!lst || !new)
		return ;
	if (*lst)
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}
	else
		*lst = new;
}

// int main()
// {
// 	t_list *temp;

// 	temp = 0;
// 	ft_lstadd_front(&temp,ft_lstnew(ft_strdup("oussama")));
// 	ft_lstadd_back(&temp,ft_lstnew(ft_strdup("ryadi")));
// 	while (temp)
// 	{
// 		printf("%s\n", temp->content);
// 		temp = temp -> next;
// 	}
// }
