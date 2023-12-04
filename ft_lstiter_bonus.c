/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghbal <haghbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 23:59:17 by haghbal           #+#    #+#             */
/*   Updated: 2023/12/01 19:30:44 by haghbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst && f)
	{
		while (lst != 0)
		{
			(*f)(lst->content);
			lst = lst->next;
		}
	}
}

// void f(void *c)
// {
// 	char *s;
// 	s=(char *)c;
// 	s[0]-=32;
// }
// int main()
// {
// 	t_list *n1;
// 	char *s1;
// 	s1=malloc(10);
// 	strcpy(s1,"hossam");
// 	n1 = ft_lstnew(s1);
// 	ft_lstiter(n1,f);
// 	printf("%s",n1->content);
// }