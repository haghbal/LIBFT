/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghbal <haghbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 20:04:41 by haghbal           #+#    #+#             */
/*   Updated: 2023/12/04 14:49:44 by haghbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char	*a;

	i = 0;
	a = (char *)b;
	while (i < len)
	{
		a[i] = (unsigned char)c;
		i++;
	}
	return (a);
}
// int main()
// {
//     // int a = 0;
//     int a[] = {13, 37};
// 	a[0] = 0;
// 	a[1] = 0;
// 	ft_memset(a, 5, 5);
// 	ft_memset(a, 0, 4);
// 	ft_memset(a, 5, 1);
// 	// ft_memset(&a, 254, 4);
// 	// ft_memset(&a, 23, 3);
// 	// ft_memset(&a, 175, 2);
// 	// ft_memset(&a, 240, 1);
// 	printf("%d",a[1]);
// }

// int xhal fih man byte 4

// int 0 = 00000000 00000000 00000000 00000000;
// int 102215664 =   000000000 000000000 000000000 000000011 
// 00000000 00000000 0000000 00000011;

// int main()
// {
// 	int x = 0;
// 	ft_memset(&x, 0b101, 2);
// 	ft_memset(&x, 0b00111001, 1);
// 	printf("%d",x);
// }