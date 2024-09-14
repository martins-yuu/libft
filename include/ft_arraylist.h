/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arraylist.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martins <martins@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 23:07:28 by martins           #+#    #+#             */
/*   Updated: 2024/09/14 20:02:41 by martins          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ARRAYLIST_H
# define FT_ARRAYLIST_H

# include <stdbool.h>
# include <stddef.h>

typedef struct s_array	t_array;

t_array					*ft_arrnew(size_t size);
void					ft_arrfree(t_array *arr);
size_t					ft_arrsize(const t_array *arr);
bool					ft_arrisempty(const t_array *arr);
void					*ft_arrat(const t_array *arr, size_t index);
void					*ft_arrappend(t_array *arr, const void *new);
void					*ft_arrinsert(t_array *arr, const void *new,
							size_t index);
void					ft_arrdel(t_array *arr, size_t index);
void					ft_arrclear(t_array *arr);

#endif
