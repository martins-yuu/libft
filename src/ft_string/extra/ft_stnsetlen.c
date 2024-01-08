/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stnsetlen.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 03:04:33 by yuuko             #+#    #+#             */
/*   Updated: 2024/04/29 09:16:02 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include <stdlib.h>

/**
 * @brief Sets the length of the binary-safe string to `newlen`.
 *
 * @param s The string to modify.
 * @param newsize The new length of the string.
 */
void	ft_stnsetlen(t_string s, size_t newsize)
{
	static const size_t		header_size = sizeof(struct s_string_header);
	struct s_string_header	*ptr;

	ptr = (struct s_string_header *)(s - header_size);
	ptr->size = newsize;
}
