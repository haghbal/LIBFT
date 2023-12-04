/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghbal <haghbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 14:52:04 by haghbal           #+#    #+#             */
/*   Updated: 2023/12/03 18:27:24 by haghbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*new_str;

	new_str = (char *)haystack;
	i = 0;
	if (*needle == '\0')
	{
		return (new_str);
	}
	while (new_str[i] && (i < len))
	{
		j = 0;
		while (new_str[i + j] == needle[j] && (i + j) < len)
		{
			if (needle[j + 1] == '\0')
				return (&new_str[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
// int main()
// {
// 	const char *str = "qabckiet";
// 	const char *to_find = "abc";
// 	size_t len = 8;
// 	char *rslt = ft_strnstr(str, to_find, len);
// 	char *rzlt = strnstr(str, to_find, len);
// 	printf("dyali:%s\n dyalhom: %s", rslt, rzlt);
// }