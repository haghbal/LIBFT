/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghbal <haghbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 20:29:33 by haghbal           #+#    #+#             */
/*   Updated: 2023/11/25 16:10:32 by haghbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include "libft.h"
#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*d;
	char	*s;

	d = (char *)dst;
	s = (char *)src;
	i = len;
	if (d > s)
	{
		while (i > 0)
		{
			d[i -1] = s[i - 1];
			i--;
		}
	}
	else
	{
		ft_memcpy(d, s, len);
	}
	return (dst);
}
// int	main()
// {
// 	char s[10]= "1234567";
// 	char k[10]= "1234567";
// 	ft_memmove(s, s+5, 2);
// 	memmove(k, k+5, 2);
// 	printf("%s\n%s", s, k);
// }