/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghbal <haghbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 22:36:23 by haghbal           #+#    #+#             */
/*   Updated: 2023/12/01 00:50:03 by haghbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}

int main()
{
	t_list	*node;
	t_list	**head;
	t_list	*new = ft_lstnew("test1");
	head = &node;
	node = ft_lstnew("test");
	ft_lstadd_front(head, new); 
	while (head)
	{
		printf("%s", head->content);
		head = head->next;
	}
}
