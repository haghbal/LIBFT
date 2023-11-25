/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghbal <haghbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 22:40:50 by haghbal           #+#    #+#             */
/*   Updated: 2023/11/24 00:34:51 by haghbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*actul_nd;
	t_list	*next;

	if (lst)
	{
		actul_nd = *lst;
		while (actul_nd != NULL)
		{
			next = actul_nd->next;
			if (del != NULL)
				del(actul_nd->content);
			free(actul_nd);
			actul_nd = next;
		}
		*lst = NULL;
	}
}
