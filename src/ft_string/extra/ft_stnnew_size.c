/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stnnew_size.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 02:47:46 by yuuko             #+#    #+#             */
/*   Updated: 2024/08/17 21:22:19 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string_int.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * @brief Allocates (with malloc(3)) and returns a new binary-safe string with
 * the given size.
 *
 * @param s The content to create the string with.
 * @param size The size of the string.
 * @return The new string.
 */
t_string	ft_stnnew_size(const char *s, size_t size)
{
	t_string				stn;
	static const size_t		header_size = sizeof(struct s_string_header);
	struct s_string_header	*ptr;

	ptr = malloc(header_size + size + 1);
	if (!ptr)
		return (NULL);
	ptr->size = size;
	ptr->capacity = size;
	stn = ptr->buffer;
	if (s)
		ft_memcpy(stn, s, size);
	else
		ft_bzero(stn, size);
	stn[size] = '\0';
	return (stn);
}
