/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moutdili <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 03:26:01 by moutdili          #+#    #+#             */
/*   Updated: 2024/10/08 03:26:07 by moutdili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*lastocc;
	int		i;

	lastocc = (char *)s;
	i = ft_strlen(lastocc);
	while (i >= 0)
	{
		if ((char)c == lastocc[i])
		{
			lastocc += i;
			return (lastocc);
		}
		i--;
	}
	if (c == '\0')
		return (lastocc);
	return (NULL);
}
