/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghbal <haghbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 17:48:38 by haghbal           #+#    #+#             */
/*   Updated: 2023/11/19 19:55:52 by haghbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


t_list  *ft_lstnew(void *content)
{
    t_list  *obj;

    obj = (t_list *)malloc(sizeof(t_list));
    if (!obj)
        return (NULL);
    obj->content = content;
    obj->next = NULL;
    return (obj);
}