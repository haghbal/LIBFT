/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghbal <haghbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:21:24 by haghbal           #+#    #+#             */
/*   Updated: 2023/11/22 00:51:56 by haghbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	size_t	i;
	size_t	lenn;

	lenn = len;
	if (s == NULL)
		return (NULL);
	if (start >= (unsigned int)ft_strlen(s))
		lenn = 0;
	else if (lenn > (size_t)ft_strlen(s + start))
		lenn = ft_strlen(s + start);
	sub = malloc((lenn + 1) * sizeof(char));
	if (!sub)
		return (NULL);
	i = 0;
	while (start + i < (size_t)ft_strlen(s) && i < lenn)
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}

// int main()
// {
// 	const char *s = "bonjour les amis";
// 	unsigned int start = 4;
// 	size_t len = 7;
// 	char *new_str;
// 	new_str = ft_substr(s, start, len);
// 	printf("%s", new_str);
// }