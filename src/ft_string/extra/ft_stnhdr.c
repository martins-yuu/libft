/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stnhdr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 21:37:35 by yuuko             #+#    #+#             */
/*   Updated: 2024/05/28 22:05:10 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string_int.h"

/**
 * @brief Returns the header of the binary-safe string `s`.
 *
 * @param s The string to be checked.
 * @return The header of the string.
 */
struct s_string_header	*ft_stnhdr(const t_string s)
{
	return ((struct s_string_header *)(s - sizeof(struct s_string_header)));
}
