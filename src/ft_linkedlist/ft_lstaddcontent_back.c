/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddcontent_back.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 14:32:19 by yuuko             #+#    #+#             */
/*   Updated: 2024/06/25 03:42:22 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_linkedlist.h"
#include <stddef.h>

/**
 * @brief Adds a new node with `content` at the end of the list.
 *
 * @param lst The address of a pointer to the first link of a list.
 * @param content The content to create the new node with.
 * @return The new node. NULL if the allocation fails.
 */
t_list	*ft_lstaddcontent_back(t_list **lst, void *content)
{
	t_list	*new;

	new = ft_lstnew(content);
	if (!new)
		return (NULL);
	ft_lstadd_back(lst, new);
	return (new);
}
