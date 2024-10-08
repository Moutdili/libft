/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moutdili <moutdili@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 03:38:41 by moutdili          #+#    #+#             */
/*   Updated: 2024/10/08 03:27:20 by moutdili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char *p;
    const unsigned char *s;
    size_t i;

    i = 0;
    p = (unsigned char *)dest;
    s = (const unsigned char *)src;
    if (!dest || !src)
    return (NULL);
    while (s[i] && i < n)
    {
        p[i] = s[i];
        i++; 
    }
    return (p);
}
