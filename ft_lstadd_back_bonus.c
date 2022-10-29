/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryadi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 13:15:10 by oryadi            #+#    #+#             */
/*   Updated: 2022/10/28 13:15:15 by oryadi           ###   ########.fr       */
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
		// new->next = NULL; machghlnach fih
	}
	else
		*lst = new;
}
