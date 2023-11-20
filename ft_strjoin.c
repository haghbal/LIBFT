/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghbal <haghbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 23:46:04 by haghbal           #+#    #+#             */
/*   Updated: 2023/11/14 15:36:44 by haghbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*concat;
	int		i;
	int		j;

	i = 0;
	j = 0;
	concat = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!concat)
		return (NULL);
	while (s1[j])
	{
		concat[i] = s1[j];
		i++;
		j++;
	}
	j = 0;
	while (s2[j])
	{
		concat[i] = s2[j];
		i++;
		j++;
	}
	concat[i] = '\0';
	return (concat);
}
// int main()
// {
// 	const char *s1 = "abcdef";
// 	const char *s2 = "ghijkl";
// 	char *s3 = ft_strjoin(s1, s2);
// 	printf("%s", s3);
// }