/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moutdili <moutdili@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 03:07:05 by moutdili          #+#    #+#             */
/*   Updated: 2024/10/08 12:23:48 by moutdili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	size_t	len;
	char	*n;

	len = 0;
	while (s[len] != '\0')
		len++;
	n = (char *)malloc(sizeof(char) * (len + 1));
	if (!n)
		return (NULL);
	i = 0;
	while (i < len)
	{
		n[i] = s[i];
		i++;
	}
	n[i] = '\0';
	return (n);
}
