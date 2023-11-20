/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghbal <haghbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 21:48:09 by haghbal           #+#    #+#             */
/*   Updated: 2023/11/15 16:26:26 by haghbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_start(char const *s1, char const *set)
{
	size_t	i;

	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	return (i);
}

static size_t	get_end(char const *s1, char const *set)
{
	size_t	i;

	i = 0;
	if (ft_strlen(s1))
		i = ft_strlen(s1) - 1;
	while (i > 0 && ft_strchr(set, s1[i]))
		i--;
	return (i);
}

static char	*get_str(const char *s1, const char *set)
{
	size_t	len;
	char	*str;
	size_t	i;

	len = get_end(s1, set) + 1;
	str = (char *)malloc((len - get_start(s1, set) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (get_start(s1, set) + i < len)
	{
		str[i] = s1[get_start(s1, set) + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;

	if (get_start(s1, set) > get_end(s1, set) || *s1 == '\0')
	{
		str = (char *)malloc(1 * sizeof(char));
		if (!str)
			return (NULL);
		*str = '\0';
	}
	else
		str = get_str(s1, set);
	return (str);
}
