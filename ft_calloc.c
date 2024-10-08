/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moutdili <moutdili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 03:03:20 by moutdili          #+#    #+#             */
/*   Updated: 2024/10/04 03:15:12 by moutdili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*buf;

	if (!(buf = (void *)malloc(size * nmemb)))
		return (NULL);
	ft_bzero(buf, size * nmemb);
	return (buf);
}
