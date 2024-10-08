/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moutdili <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 03:29:05 by moutdili          #+#    #+#             */
/*   Updated: 2024/10/08 03:29:19 by moutdili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *p;
	unsigned char cible;
	size_t i;

	p = (unsigned char *)s;
	cible = (unsigned char)c;
	i = 0;

	while (i < n)
	{
		if (p[i] == cible)
		return (void *)(p + i);
	i++;
	}
	return (NULL);
}
