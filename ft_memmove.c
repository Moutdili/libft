/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moutdili <moutdili@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 03:38:41 by moutdili          #+#    #+#             */
/*   Updated: 2024/10/08 12:13:44 by moutdili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*p;
	const unsigned char	*s;

	p = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (!p && !s)
		return (NULL);
	if (p < s)
		return (ft_memcpy(dest, src, n));
	else
	{
		while (0 < n)
		{
			p[n - 1] = s[n - 1];
			n--;
		}
	}
	return (p);
}
