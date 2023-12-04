/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghbal <haghbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:08:07 by haghbal           #+#    #+#             */
/*   Updated: 2023/12/04 14:48:46 by haghbal          ###   ########.fr       */
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
	size_t	lendst;
	size_t	lensrc;

	i = 0;
	lendst = ft_strlen(dst);
	j = lendst;
	lensrc = ft_strlen((char *)src);
	if (dstsize <= lendst)
		return (lensrc + dstsize);
	while (src[i] && i < dstsize - lendst - 1)
	{
		dst[i + j] = src[i];
		i++;
	}
	dst[i + j] = '\0';
	return (lensrc + j);
}

// int main()
// {
// 	char dest[20] = "hamza";
// 	char dst[20] = "hamza";
// 	char *sorc = "aghbal";
// 	size_t f = ft_strlcat(dest, sorc, 7);
// 	size_t g = strlcat(dst, sorc, 7);
// 	printf("dli: %s\n dhom: %s\n dli:%zu\n dlhom: %zu", dest, dst, f, g);
// } 