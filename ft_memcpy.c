/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghbal <haghbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 18:05:11 by haghbal           #+#    #+#             */
/*   Updated: 2023/11/27 00:21:25 by haghbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*s;
	char	*d;

	s = (char *)src;
	d = (char *)dst;
	i = 0;
	if (dst == NULL && src == NULL)
		return (0);
	while (i < n / sizeof(char))
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}
// int main()
// {
//     int i;
//     char s[10] = "abcdefgh";
//     char d[10];
//     ft_memcpy(d, s, 5);
//     for (i=0; i<10; i++)
//     {
//         printf("%c", d[i]);
//     }
// }