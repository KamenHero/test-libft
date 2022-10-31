/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryadi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 15:42:31 by oryadi            #+#    #+#             */
/*   Updated: 2022/10/30 15:42:33 by oryadi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	del(lst->content);
	free(lst);
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
// 	ft_lstdelone(temp,msa7);
// 	printf("%s",temp->content);
// }
