/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghbal <haghbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 21:18:24 by haghbal           #+#    #+#             */
/*   Updated: 2023/11/11 22:40:58 by haghbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	cr;

	str = (unsigned char *)s;
	cr = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (str[i] == cr)
			return (&str[i]);
		i++;
	}
	return (NULL);
}

// int main()
// {
// 	char *s = "hamza";
// 	char c = 'a';
// 	size_t n = 10;
// 	char *rslt = ft_memchr(s, c, n);
// 	printf("%s", rslt);
// }