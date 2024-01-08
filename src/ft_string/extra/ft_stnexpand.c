/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stnexpand.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 06:11:45 by yuuko             #+#    #+#             */
/*   Updated: 2024/04/29 09:16:42 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdlib.h"
#include "ft_string.h"
#include <stdlib.h>

/**
 * @brief Expands the free space at the end of the binary-safe string `s`.
 *
 * @param str The string to expand.
 * @param size The new capacity of the string.
 * @return The expanded string. NULL if the allocation fails.
 */
t_string	ft_stnexpand(t_string s, size_t size)
{
	static const size_t		header_size = sizeof(struct s_string_header);
	size_t					len;
	size_t					newsize;
	struct s_string_header	*ptr;

	len = ft_stnlen(s);
	if (ft_stncap(s) - len >= size)
		return (s);
	newsize = (len + size) * 2;
	ptr = (struct s_string_header *)(s - header_size);
	ptr = ft_mexpand(ptr, header_size + newsize + 1, header_size + len + 1);
	if (!ptr)
		return (NULL);
	s = ptr->buffer;
	ptr->capacity = newsize;
	return (s);
}
