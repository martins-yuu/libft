/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stnlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 04:09:07 by yuuko             #+#    #+#             */
/*   Updated: 2024/04/29 09:16:02 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include <stdlib.h>

/**
 * @brief Returns the length of the binary-safe string `s`.
 *
 * @param s The string to be checked.
 * @return The length of the string.
 */
size_t	ft_stnlen(const t_string s)
{
	size_t					i;
	static const size_t		header_size = sizeof(struct s_string_header);
	struct s_string_header	*ptr;

	ptr = (struct s_string_header *)(s - header_size);
	i = ptr->size;
	return (i);
}
