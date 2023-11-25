/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghbal <haghbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 21:37:51 by haghbal           #+#    #+#             */
/*   Updated: 2023/11/25 23:01:40 by haghbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*a;
	char	b;

	i = 0;
	a = (char *)s;
	b = (char)c;
	while (a[i])
	{
		if (a[i] == b)
			return (&a[i]);
		i++;
	}
	if (b == '\0')
		return (&a[i]);
	return (0);
}
// int main() 
// {
//     const char *chaine = "Hello, World!";
//     char caractere = '\0';

//     char *resultat = ft_strchr(chaine, caractere);
//     printf("%s\n", resultat);
// }