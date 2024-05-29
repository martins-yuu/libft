/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arraylist_int.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 23:07:28 by yuuko             #+#    #+#             */
/*   Updated: 2024/06/02 14:23:08 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ARRAYLIST_INT_H
# define FT_ARRAYLIST_INT_H

# include "ft_arraylist.h"

# define ARRAY_DEFAULT_CAPACITY 16
# define ARRAY_GROWTH_FACTOR 2

struct		s_array
{
	void	*elements;
	size_t	element_size;
	size_t	size;
	size_t	capacity;
};

t_array		*ft_arrexpand(t_array *arr, size_t size);
size_t		ft_arrcap(const t_array *arr);

#endif
