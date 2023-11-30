/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghbal <haghbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 22:23:36 by haghbal           #+#    #+#             */
/*   Updated: 2023/11/30 16:51:18 by haghbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	size_t	cpy;
	char	*str;
	char	*mem;

	str = (char *)s1;
	len = ft_strlen(str);
	mem = (char *)malloc((len + 1) * sizeof(char));
	if (!mem)
		return (NULL);
	cpy = ft_strlcpy(mem, str, len + 1);
	return (mem);
}
// int main()
// {
// 	char *str = "hamza aghbal bonjour comment aller vous";
// 	char *rslt = ft_strdup(str);
// 	printf("%s",rslt);
// 	return 0;
// }