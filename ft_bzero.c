/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghbal <haghbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 14:01:36 by haghbal           #+#    #+#             */
/*   Updated: 2023/11/25 16:20:49 by haghbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*b;

	i = 0;
	b = (unsigned char *)s;
	ft_memset(b, '\0', n);
}
// int main()
// {
//     char k[10];
//     ft_bzero(k, 2);
//     for (int i = 0; i < 10; i++)
//     {
//     printf("%c", k[i]);
//     }
// }
