/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghbal <haghbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 20:04:41 by haghbal           #+#    #+#             */
/*   Updated: 2023/11/25 22:59:18 by haghbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char	*a;
	char	k;

	i = 0;
	k = (char)c;
	a = (char *)b;
	while (i < len)
	{
		a[i] = k;
		i++;
	}
	return (a);
}
// int main()
// {
//     char s[10];
// 	int x;
//     ft_memset(&x, 5, 2);
// 	ft_memset(&x, 57, 1);
//     printf("%d\n", x);
//     // printf("%s\n",f);
// 	  // char *f = memset(s, 'd', 5);
// }