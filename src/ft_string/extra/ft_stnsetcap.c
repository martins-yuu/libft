/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stnsetcap.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 03:05:54 by yuuko             #+#    #+#             */
/*   Updated: 2024/04/29 09:16:02 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include <stdlib.h>

/**
 * @brief Sets the capacity of the binary-safe string to `newcap`.
 *
 * @param s The string to modify.
 * @param newsize The new capacity of the string.
 */
void	ft_stnsetcap(t_string s, size_t newsize)
{
	static const size_t		header_size = sizeof(struct s_string_header);
	struct s_string_header	*ptr;

	ptr = (struct s_string_header *)(s - header_size);
	ptr->capacity = newsize;
}
