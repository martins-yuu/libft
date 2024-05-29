/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hashmap_int.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 18:20:42 by yuuko             #+#    #+#             */
/*   Updated: 2024/05/28 22:22:33 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HASHMAP_INT_H
# define FT_HASHMAP_INT_H

# include "ft_arraylist.h"
# include "ft_hashmap.h"
# include <stdlib.h>

# define HASHMAP_MAX_LOAD_FACTOR 0.75
# define HASHMAP_GROWTH_FACTOR 2

typedef size_t		(*t_hash_func)(const char *key);

struct				s_hashmap
{
	t_array			*entries;
	size_t			size;
	t_hash_func		hash;
};

struct				s_entry
{
	const char		*key;
	void			*value;
};

size_t				ft_hshhash(const char *key);
struct s_entry		*ft_hshfind(const t_hashmap *hsh, const char *key);
t_hashmap			*ft_hshexpand(t_hashmap *hsh, size_t size);

#endif
