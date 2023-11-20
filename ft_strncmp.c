/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghbal <haghbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 16:29:45 by haghbal           #+#    #+#             */
/*   Updated: 2023/11/11 23:02:06 by haghbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*new_s1;
	unsigned char	*new_s2;

	new_s1 = (unsigned char *)s1;
	new_s2 = (unsigned char *)s2;
	i = 0;
	while ((new_s1[i] || new_s2[i]) && i < n)
	{
		if (new_s1[i] != new_s2[i])
			return (new_s1[i] - new_s2[i]);
		i++;
	}
	return (0);
}

// int main()
// {
// 	const char *s2 = "test\0";
// 	const char *s1 = "test\200";
// 	size_t n = 6;
// 	int a = ft_strncmp(s1, s2, n);
// 	int	b = strncmp(s1, s2, n);
// 	printf("dyali: %d\n dyalhom %d", a, b);
// }