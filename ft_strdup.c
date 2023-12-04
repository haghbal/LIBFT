/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghbal <haghbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 22:23:36 by haghbal           #+#    #+#             */
/*   Updated: 2023/12/03 17:46:41 by haghbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*mem;

	len = ft_strlen(s1);
	mem = (char *)malloc((len + 1) * sizeof(char));
	if (!mem)
		return (NULL);
	ft_strlcpy(mem, s1, len + 1);
	return (mem);
}
// int main()
// {
// 	char *str = "hamza aghbal bonjour comment aller vous";
// 	char *rslt = ft_strdup(str);
// 	printf("%s",rslt);
// 	return 0;
// }