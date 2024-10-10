/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moutdili <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 03:33:19 by moutdili          #+#    #+#             */
/*   Updated: 2024/10/08 12:20:22 by moutdili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *str, char c)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*str)
	{
		if (*str != c && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (*str == c)
			in_word = 0;
		str++;
	}
	return (count);
}

static char	*get_word(const char *str, int start, int end)
{
	int		i;
	char	*word;

	word = malloc((end - start + 1) * sizeof(char));
	if (!word)
		return (NULL);
	i = 0;
	while (start < end)
	{
		word[i] = str[start];
		i++;
		start++;
	}
	word[i] = '\0';
	return (word);
}

static void	free_strs(char **strs, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		free(strs[i]);
		i++;
	}
	free(strs);
}

static int	process_split(char **res, const char *s, size_t len, char c)
{
	size_t	i;
	size_t	j;
	int		s_word;

	i = 0;
	j = 0;
	s_word = -1;
	while (i <= len)
	{
		if (s[i] != c && s_word < 0)
			s_word = i;
		else if ((s[i] == c || i == len) && s_word >= 0)
		{
			res[j] = get_word(s, s_word, i);
			if (!res[j])
			{
				free_strs(res, j);
				return (0);
			}
			j++;
			s_word = -1;
		}
		i++;
	}
	return (1);
}

char	**ft_split(const char *s, char c)
{
	size_t	len;
	char	**res;

	len = ft_strlen(s);
	res = ft_calloc(count_words(s, c) + 1, sizeof(char *));
	if (!res)
		return (NULL);
	if (!process_split(res, s, len, c))
		return (NULL);
	return (res);
}
