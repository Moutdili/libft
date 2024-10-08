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

#include	"libft.h"

char *ft_strrchr(const char *s, int c)
{
	const char *lastocc = NULL;
	while (*s != '\0')
	{
		if (*s == (char)c)
		lastocc = s;
	s++;
	}
	if (c == '\0')
	return (char *)s;
	return (char *)lastocc;
}
