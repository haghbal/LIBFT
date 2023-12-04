/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghbal <haghbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 20:08:29 by haghbal           #+#    #+#             */
/*   Updated: 2023/12/03 18:52:45 by haghbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	srclen;

	i = 0;
	srclen = ft_strlen(src);
	if (dstsize <= 0)
		return (srclen * sizeof(char));
	while (i < dstsize - 1 && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (srclen * sizeof(char));
}

// int main() 
// {
//     char destination[20];
//     const char *source = "abcdefg";
//     size_t total_size = 5;

//     size_t result = strlcpy(destination, source, total_size);
// 	size_t rst = ft_strlcpy(destination, source, total_size);

//     printf("Copied string: %s\n", destination);
//     printf("Total characters copied (without truncation): %zu\n", result);
//  	printf("Total characters copied (without truncation): %zu\n", rst);
//     return 0;
// }