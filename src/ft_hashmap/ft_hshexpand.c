/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hshexpand.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 11:24:10 by yuuko             #+#    #+#             */
/*   Updated: 2024/05/02 19:31:06 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_arraylist.h"
#include "ft_hashmap.h"
#include <stdlib.h>

static void	set_entry(t_array *entries, struct s_entry *entry, size_t index);

/**
 * @brief Expands the hash map to the new size, rehashing all the entries.
 *
 * @param hsh A pointer to the hash map to expand.
 * @param size The new size of the hash map.
 * @return The expanded hash map. NULL if the allocation fails.
 */
t_hashmap	*ft_hshexpand(t_hashmap *hsh, size_t size)
{
	t_array			*tmp;
	size_t			i;
	struct s_entry	*entry;
	size_t			index;

	tmp = ft_arrnew(sizeof(struct s_entry));
	if (!tmp)
		return (NULL);
	if (!ft_arrexpand(tmp, size))
		return (ft_arrfree(tmp), NULL);
	i = 0;
	while (i < hsh->entries->capacity)
	{
		entry = ft_arrat(hsh->entries, i);
		if (entry->key != NULL)
		{
			index = hsh->hash(entry->key) % tmp->capacity;
			set_entry(tmp, entry, index);
		}
		i++;
	}
	ft_arrfree(hsh->entries);
	hsh->entries = tmp;
	return (hsh);
}

static void	set_entry(t_array *entries, struct s_entry *entry, size_t index)
{
	struct s_entry	*pairs;

	pairs = entries->elements;
	if (pairs[index].key == NULL)
	{
		ft_arrinsert(entries, entry, index);
		return ;
	}
	set_entry(entries, entry, (index + 1) % entries->capacity);
}
