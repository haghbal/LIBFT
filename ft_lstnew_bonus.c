/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghbal <haghbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 00:12:51 by haghbal           #+#    #+#             */
/*   Updated: 2023/11/27 00:23:35 by haghbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*obj;

	obj = (t_list *)malloc(sizeof(t_list));
	if (obj == NULL)
		return (NULL);
	if (content != NULL)
	{
		obj->content = content;
		obj->next = 0;
	}
	else
	{
		obj->content = content;
		obj->next = NULL;
	}
	return (obj);
}
