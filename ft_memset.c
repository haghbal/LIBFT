/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghbal <haghbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 20:04:41 by haghbal           #+#    #+#             */
/*   Updated: 2023/11/08 23:30:42 by haghbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
	int				i;
	unsigned char	*a;
	unsigned char	k;

	i = 0;
	k = (unsigned char)c;
	a = (unsigned char *)b;
	while (i < (int)len)
	{
		a[i] = k;
		i++;
	}
	return (a);
}
// int main()
// {
//     char s[10];
//     char *m = ft_memset(s, 'd', 5);
//     char *f = memset(s, 'd', 5);
//     printf("%s\n", m);
//     printf("%s\n",f);
// }