/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hashmap.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 18:20:42 by yuuko             #+#    #+#             */
/*   Updated: 2024/05/29 00:16:10 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HASHMAP_H
# define FT_HASHMAP_H

# include "ft_arraylist.h"
# include <stdbool.h>
# include <stdlib.h>

# define HASHMAP_MAX_LOAD_FACTOR 0.75
# define HASHMAP_GROWTH_FACTOR 2

typedef struct s_hashmap	t_hashmap;

typedef struct s_hashmap_iterator
{
	const char				*key;
	void					*value;
	const t_hashmap			*_hsh;
	size_t					_index;
}							t_hashmap_iterator;

typedef size_t				(*t_hash_func)(const char *key);

t_hashmap					*ft_hshnew(t_hash_func hash);
void						ft_hshfree(t_hashmap *hsh);
size_t						ft_hshsize(const t_hashmap *hsh);
void						*ft_hshget(const t_hashmap *hsh, const char *key);
bool						ft_hshset(t_hashmap *hsh, const char *key,
								void *value);
void						ft_hshdel(t_hashmap *hsh, const char *key);
void						ft_hshdel2(t_hashmap *hsh, const char *key,
								void (*delkey)(char *),
								void (*delvalue)(char *));
t_hashmap_iterator			ft_hshbegin(const t_hashmap *hsh);
bool						ft_hshnext(t_hashmap_iterator *it);
void						ft_hsheach(t_hashmap *hsh,
								void (*f)(const char *key, void *value));

#endif
