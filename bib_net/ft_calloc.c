/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghbal <haghbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 20:45:21 by haghbal           #+#    #+#             */
/*   Updated: 2023/12/04 16:29:24 by haghbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
