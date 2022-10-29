/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryadi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 15:01:52 by oryadi            #+#    #+#             */
/*   Updated: 2022/10/29 15:01:57 by oryadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*temp;

	if (!lst || !f || !del)
		return (NULL);
	temp = lst;
	newlst = 0;
	while (temp)
	{
		ft_lstadd_back(&newlst, ft_lstnew(f(temp->content)));
		if (!newlst)
		{
			ft_lstclear(&lst, del);
			return (NULL);
		}
		temp = temp->next;
	}
	return (newlst);
}
