/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghbal <haghbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 21:18:24 by haghbal           #+#    #+#             */
/*   Updated: 2023/11/25 23:02:04 by haghbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*str;
	char	cr;

	str = (char *)s;
	cr = (char)c;
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