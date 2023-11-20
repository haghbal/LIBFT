/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghbal <haghbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 22:44:38 by haghbal           #+#    #+#             */
/*   Updated: 2023/11/12 22:56:13 by haghbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*s;
	unsigned char	*ss;

	s = (unsigned char *)s1;
	ss = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (s[i] != ss[i])
			return (s[i] - ss[i]);
		i++;
	}
	return (0);
}
// int main()
// {
// 	const char *s2 = "test\0";
// 	const char *s1 = "test\200";
// 	size_t n = 5;
// 	int a = ft_memcmp(s1, s2, n);
// 	int	b = memcmp(s1, s2, n);
// 	printf("dyali: %d\n dyalhom %d", a, b);
// }