/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arraylist.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 23:07:28 by yuuko             #+#    #+#             */
/*   Updated: 2024/05/28 22:07:34 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ARRAYLIST_H
# define FT_ARRAYLIST_H

# include <stdlib.h>

typedef struct s_array	t_array;

t_array					*ft_arrnew(size_t size);
void					ft_arrfree(t_array *arr);
size_t					ft_arrsize(const t_array *arr);
size_t					ft_arrcap(const t_array *arr);
void					*ft_arrat(const t_array *arr, size_t index);
void					*ft_arrappend(t_array *arr, const void *new);
void					*ft_arrinsert(t_array *arr, const void *new,
							size_t index);
void					ft_arrdelat(t_array *arr, size_t index);
void					ft_arrclear(t_array *arr);

#endif
