/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moutdili <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 09:38:01 by moutdili          #+#    #+#             */
/*   Updated: 2024/10/08 09:38:03 by moutdili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *mapped_list;
    t_list *current_node;

    mapped_list = NULL;

    if (!lst || !f)
        return (NULL);
    
    while (lst)
    {
        current_node = ft_lstnew(f(lst->content));
        if (!current_node)
        {
            ft_lstclear(&mapped_list, del);
            return (NULL);
        }
        ft_lstadd_back(&mapped_list, current_node);
        lst = lst->next;
    }
    return (mapped_list);
}
