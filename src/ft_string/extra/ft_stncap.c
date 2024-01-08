/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stncap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/01 06:12:27 by yuuko             #+#    #+#             */
/*   Updated: 2024/04/29 09:17:15 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include <stdlib.h>

/**
 * @brief Returns the capacity of the binary-safe string `s`.
 *
 * @param s The string to be checked.
 * @return The capacity of the string.
 */
size_t	ft_stncap(const t_string s)
{
	size_t					i;
	static const size_t		header_size = sizeof(struct s_string_header);
	struct s_string_header	*ptr;

	ptr = (struct s_string_header *)(s - header_size);
	i = ptr->capacity;
	return (i);
}
