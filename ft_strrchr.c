/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghbal <haghbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 22:34:37 by haghbal           #+#    #+#             */
/*   Updated: 2023/12/03 17:58:18 by haghbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*a;
	char	b;
	char	*j;

	i = 0;
	a = (char *)s;
	b = (char)c;
	j = NULL;
	while (a[i])
	{
		if (a[i] == b)
		{
			j = &a[i];
		}
		i++;
	}
	if (a[i] == b)
		return (&a[i]);
	return (j);
}

// int main() 
// {
//     const char *chaine = "Hello, World!";
//     char caractere = '\0';

//     char *resultat = ft_strrchr(chaine, caractere);
//     printf("%s\n", resultat);
// }