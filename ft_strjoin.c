/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moutdili <moutdili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 02:46:24 by moutdili          #+#    #+#             */
/*   Updated: 2024/10/07 06:44:46 by moutdili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	copy_string(char *str, char const *s1, char const *s2, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (i <= size)
	{
		if (i < ft_strlen(s1))
		{
			str[i] = s1[i];
		}
		else
		{
			str[i] = s2[j];
			j++;
		}
		i++;
	}
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	size_t	result_size;

	result_size = ft_strlen(s1) + ft_strlen(s2);
	result = (char *)malloc(sizeof(char) * (result_size + 1));
	if (!result)
		return (NULL);
	copy_string(result, s1, s2, result_size);
	result[result_size] = '\0';
	return (result);
}
