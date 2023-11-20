/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghbal <haghbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 19:34:28 by haghbal           #+#    #+#             */
/*   Updated: 2023/11/18 21:25:24 by haghbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		write (fd, &s[i], 1);
		i++;
	}
	write (fd, "\n", 1);
}

// void	ft_putendl_fd(char *s, int fd)
// {
// 	char	new_l;

// 	new_l = '\n';
// 	write (fd, s, ft_strlen(s));
// 	write (fd, &new_l, 1);
// }
