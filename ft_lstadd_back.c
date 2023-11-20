/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghbal <haghbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 23:22:51 by haghbal           #+#    #+#             */
/*   Updated: 2023/11/19 23:33:06 by haghbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	while (lst)
	{
		if (lst->next == NULL)
		{
			lst->next == *new;
			new->next == NULL;
		}
		lst = lst->next;
	}
}
