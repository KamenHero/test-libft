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
	int i;

	i = ft_lstsize(lst);
	while (i > 0)
	{
		ft_lstnew(newlst);
		if (!newlst)
			return (NULL);
		newlst = newlst->next;
		newlst->content = f(lst->content);
		lst = lst->next;
		i--;
	}
	return (newlst);
}
