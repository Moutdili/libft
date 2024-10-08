/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moutdili <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 03:19:04 by moutdili          #+#    #+#             */
/*   Updated: 2024/10/08 03:19:32 by moutdili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	j;
	size_t	n;

	n = 0;
	if (!*little || big == little)
		return ((char *)big);
	while (big[n])
	{
		j = 0;
		while (big[n] == little[j] && big[n] && n < len)
		{
			n++;
			j++;
		}
		if (!little[j])
			return ((char *)big + (n - j));
		n = (n - j) + 1;
	}
	return (NULL);
}
