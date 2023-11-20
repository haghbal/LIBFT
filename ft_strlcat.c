/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghbal <haghbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:08:07 by haghbal           #+#    #+#             */
/*   Updated: 2023/11/11 21:16:58 by haghbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	dstlen;
	size_t	srclen;

	i = 0;
	dstlen = ft_strlen(dst);
	j = dstlen;
	srclen = ft_strlen((char *)src);
	if (dstsize <= dstlen)
		return (srclen + dstsize);
	while (src[i] && i < dstsize - dstlen - 1)
	{
		dst[i + j] = src[i];
		i++;
	}
	dst[i + j] = '\0';
	return (srclen + j);
}

// int main()
// {
// 	char dest[20] = "hamza";
// 	char dst[20] = "hamza";
// 	char *sorc = "aghbal";
// 	size_t f = ft_strlcat(dest, sorc, 10);
// 	size_t g = strlcat(dst, sorc, 10);
// 	printf("dyali: %s\n dyalhom: %s\n dyali 
// :%zu\n dyalhom: %zu", dest, dst, f, g);
// 	} 