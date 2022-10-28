/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryadi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 09:50:04 by oryadi            #+#    #+#             */
/*   Updated: 2022/10/28 09:50:06 by oryadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;
	t_list	*temp;

	temp = content;
	node = malloc(sizeof(t_list));
	if (!node)
		return (0);
	node -> content = temp;
	node -> next = NULL;
	return (node);
}
