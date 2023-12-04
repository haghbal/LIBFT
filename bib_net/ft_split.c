/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghbal <haghbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 18:13:58 by haghbal           #+#    #+#             */
/*   Updated: 2023/12/04 18:27:24 by haghbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	words;
	int	i;

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

static void	ft_saisi(char **tab, const char *s, char c, int index)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
	{
		tab[index][i] = s[i];
		i++;
	}
	tab[index][i] = '\0';
}

static char	**free_tab(char **tab, int index)
{
	while (index >= 0)
	{
		free(tab[index]);
		index--;
	}
	free(tab);
	return (0);
}

static char	**aloc_soutab(char **tab, char const *s, char c)
{
	int	j;
	int	count;
	int	i;

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
				return (free_tab(tab, i));
			ft_saisi(tab, s + j, c, i);
			i++;
			j = j + count;
		}
		else
			j++;
	}
	tab[i] = 0;
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	int		words;
	char	**tab;

	if (s == NULL)
		return (NULL);
	words = count_words(s, c);
	tab = malloc((words + 1) * sizeof(char *));
	if (!tab)
		return (0);
	tab = aloc_soutab(tab, s, c);
	return (tab);
}
