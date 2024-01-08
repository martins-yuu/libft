/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 14:17:59 by yuuko             #+#    #+#             */
/*   Updated: 2024/03/22 22:56:08 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ctype.h"

/**
 * @brief Converts a lowercase letter to uppercase.
 *
 * If `c` is a lowercase letter, returns its uppercase equivalent, if an
 * uppercase representation exists in the current locale. Otherwise, returns
 * `c`.
 *
 * @param c The character to be converted.
 * @return The converted letter, or `c` if the conversion was not possible.
 */
int	ft_toupper(int c)
{
	if (ft_islower(c))
		return (c - ('a' - 'A'));
	return (c);
}
