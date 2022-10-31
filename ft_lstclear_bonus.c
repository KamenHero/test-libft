/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryadi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 15:44:47 by oryadi            #+#    #+#             */
/*   Updated: 2022/10/30 15:44:48 by oryadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;
	t_list	*tmpnxt;

	if (!lst || !del)
		return ;
	temp = *lst;
	while (temp != NULL)
	{
		tmpnxt = temp->next;
		ft_lstdelone(temp, del);
		temp = tmpnxt;
	}
	*lst = NULL;
}

// void	msa7(void	*content)
// {
// 	free(content);
// }

// int main()
// {
// 	t_list	*temp;

// 	temp = 0;
// 	ft_lstadd_front(&temp,ft_lstnew(ft_strdup("oussama")));
// 	ft_lstadd_back(&temp,ft_lstnew(ft_strdup("ryadi")));
// 	ft_lstadd_back(&temp,ft_lstnew(ft_strdup("5145641")));
// 	// ft_lstclear(&temp,msa7);
// 	while (temp)
// 	{
// 		printf("%s\n", temp->content);
// 		temp = temp -> next;
// 	}
// }
