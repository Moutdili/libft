
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moutdili <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 08:48:12 by moutdili          #+#    #+#             */
/*   Updated: 2024/10/08 08:48:16 by moutdili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *last_node;

    if (!lst || !new)
        return;
    
    if (*lst == NULL)
        *lst = new;
    else
    {
        last_node = ft_lstlast(*lst);
        last_node->next = new;
    }
}

