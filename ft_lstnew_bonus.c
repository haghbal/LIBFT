/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghbal <haghbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 00:12:51 by haghbal           #+#    #+#             */
/*   Updated: 2023/12/01 00:14:19 by haghbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*obj;

	obj = malloc(sizeof(t_list));
	if (obj == NULL)
		return (NULL);
	obj->content = content;
	obj->next = 0;
	return (obj);
}

// int main()
// {
// 	t_list	*node;

// 	node = ft_lstnew("test");

// 	printf("%s", node->content);
// }