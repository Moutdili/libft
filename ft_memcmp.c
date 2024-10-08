/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moutdili <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 03:28:04 by moutdili          #+#    #+#             */
/*   Updated: 2024/10/08 03:28:09 by moutdili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *p;
	unsigned char *r;
	size_t i;

	p = (unsigned char *)s1;
	r = (unsigned char *)s2;
	i = 0;

	while (i < n)
	{
		if (p[i] != r[i])
		{
			return (p[i] - r[i]);
		}
		i++;
	}
	return (0);
}
