/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moutdili <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 03:33:19 by moutdili          #+#    #+#             */
/*   Updated: 2024/10/08 03:33:23 by moutdili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"
static size_t count_words(char const *s, char c)
{
	size_t	count = 0;

	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			count++;
		while (*s && *s != c)
			s++;
	}
	return (count);
}
static char *word_dup(const char *s, size_t start, size_t end)
{
	char *word;
	size_t i;
	
	word = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (start < end)
		word[i++] = s[start++];
	word[i] = '\0';
	return (word);
}
char	**ft_split(char const *s, char c)
{
	char **result;
	size_t i;
	size_t start;
	size_t word_index;

	i = 0;
	word_index = 0;
	result = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!result || !s)
		return (NULL);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > start)
			result[word_index++] = word_dup(s, start, i);
	}
	result[word_index] = NULL;
	return (result);
}
