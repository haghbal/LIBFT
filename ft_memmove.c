/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghbal <haghbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 20:29:33 by haghbal           #+#    #+#             */
/*   Updated: 2023/11/06 20:07:12 by haghbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;
	int				dif;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	dif = d - s;
	i = len;
	if (dif > 0)
	{
		while (i > 0)
		{
			s[i -1 + dif] = s[i - 1];
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
// 	char s[10]= "bonjour";
// 	ft_memmove(s+2, s, 3);
// 	printf("%s", s);
// }