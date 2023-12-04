/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghbal <haghbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 20:45:21 by haghbal           #+#    #+#             */
/*   Updated: 2023/12/03 16:27:34 by haghbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	char	*my_memory;

	if (count < 0 || size < 0)
		return (0);
	if (count > 4294967295 || size > 4294967295)
		return (0);
	my_memory = malloc(count * size);
	if (!my_memory)
		return (0);
	ft_bzero(my_memory, size * count);
	return (my_memory);
}

// int main()
// {
// 	char *mem = ft_calloc(45, 45);
// 	char *mem1 = calloc(45, 45);
// 	// int i;
// 	// for (i = 0; i < 16; i++)
// 	// printf("%c", mem[i]);
// 	printf("%s\n", mem);
// 	printf("%s", mem1);
// 	// free(mem);
// 	free(mem1);
// }