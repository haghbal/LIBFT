/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghbal <haghbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 20:45:21 by haghbal           #+#    #+#             */
/*   Updated: 2023/11/12 21:29:33 by haghbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*my_memory;

	my_memory = malloc(count * size);
	if (!my_memory)
	{
		return (0);
	}
	ft_bzero(my_memory, size * count);
	return (my_memory);
}

// int main()
// {
// 	char *mem = ft_calloc(4, 4);
// 	int i;
// 	for (i = 0; i < 16; i++)
// 		printf("%c", mem[i]);
// 	free(mem);
// }