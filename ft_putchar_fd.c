/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghbal <haghbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 15:41:26 by haghbal           #+#    #+#             */
/*   Updated: 2023/12/03 17:31:24 by haghbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// int main()
// {
// 	int	fd;
// 	char *ficher = "ficher.txt";

// 	fd = open(ficher,  O_WRONLY);
// 	if (fd = - 1)
// 		return (0);
// 	ft_putchar('a', 3);
// }