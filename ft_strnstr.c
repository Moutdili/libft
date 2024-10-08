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

char *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t i;
    size_t little_len;

    i = 0;
    if (*little == '\0')
        return (char *)big;

    little_len = ft_strlen(little);


    if (len < little_len)
        return NULL;


    while (i <= len - little_len)
    {

        if (big[i] == little[0] && ft_strncmp(&big[i], little, little_len) == 0)
            return (char *)&big[i];
        i++;
    }

    return (NULL);
}
