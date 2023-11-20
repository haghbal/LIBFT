/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghbal <haghbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 18:13:58 by haghbal           #+#    #+#             */
/*   Updated: 2023/11/18 23:52:45 by haghbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

static size_t	count_words(char const *s, char c)
{
	size_t	words;
	size_t	i;

	words = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			words++;
		i++;
	}
	return (words);
}

static void	ft_saisi(char *soutab, const char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
	{
		soutab[i] = s[i];
		i++; 
	}
	soutab[i] = '\0';
}

void	free_tab(char **tab, size_t index)
{
	size_t	i;

	i = 0;
	while (i < index)
	{
		free(tab[i]);
		i++;
	}
	if (i == 0)
		free(tab);
}

static void	aloc_soutab(char **tab, char const *s, char c)
{
	size_t	j;
	size_t	count;
	size_t	i;

	j = 0;
	i = 0;
	while (s[j])
	{
		count = 0;
		while (s[j + count] != c && s[j + count] != '\0')
			count++;
		if (count > 0)
		{
			tab[i] = malloc((count + 1) * sizeof(char));
			if (!tab[i])
			{
				free_tab(tab, i);
				return ;
			}
			ft_saisi(tab[i], (s + j), c);
			i++;
			j = j + count;
		}
		else
			j++;
	}
	tab[i] = 0;
}

char	**ft_split(char const *s, char c)
{
	size_t	words;
	char	**tab;

	words = count_words(s, c);
	tab = malloc((words + 1) * sizeof(char *));
	if (!tab)
		return (0);
	aloc_soutab(tab, s, c);
	return (tab);
}

// int main()
// {
// 	char const *s = "DbonjourDlesDamisD";
// 	char c = 'D';
// 	char **ss = ft_split(s, c);
// 	int i = 0;
// 	while (ss[i])
// 	{
// 		printf("%s\n", ss[i]);
// 		i++;
// 		free(ss[i]);
// 	}
// 	free(ss);
// }