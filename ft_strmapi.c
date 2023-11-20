/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghbal <haghbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 21:08:24 by haghbal           #+#    #+#             */
/*   Updated: 2023/11/17 23:39:45 by haghbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	int		len;
	char	*str;

	i = 0;
	len = 0;
	if (s == NULL || f == NULL)
		return (NULL);
	while (s[len])
		len++;
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (i < len)
	{
		str[i] = (*f)((unsigned int)i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

// int main()
// {
// 	const char *str = "abc";
// 	char *result = ft_strmapi(str, &my_function);
// 	printf("%s\n", result);
// 	free(result);
// }
