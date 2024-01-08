/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arraylist.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 23:07:28 by yuuko             #+#    #+#             */
/*   Updated: 2024/03/22 22:32:14 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ARRAYLIST_H
# define FT_ARRAYLIST_H

# include <stdlib.h>

# define ARRAY_DEFAULT_CAPACITY 16

typedef struct s_array
{
	void	*elements;
	size_t	element_size;
	size_t	size;
	size_t	capacity;
}			t_array;

t_array		*ft_arrnew(size_t size);
void		ft_arrfree(t_array *arr);
size_t		ft_arrsize(t_array *arr);
void		*ft_arrat(t_array *arr, size_t index);
void		*ft_arradd(t_array *arr, const void *new);
void		ft_arrdelat(t_array *arr, size_t index);
void		ft_arrclear(t_array *arr);

#endif
