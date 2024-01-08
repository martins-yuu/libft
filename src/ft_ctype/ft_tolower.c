/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 14:42:02 by yuuko             #+#    #+#             */
/*   Updated: 2024/03/22 22:56:02 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ctype.h"

/**
 * @brief Converts an uppercase letter to lowercase.
 *
 * If `c` is an uppercase letter, returns its lowercase equivalent, if a
 * lowercase representation exists in the current locale. Otherwise, returns
 * `c`.
 *
 * @param c The character to be converted.
 * @return The converted letter, or `c` if the conversion was not possible.
 */
int	ft_tolower(int c)
{
	if (ft_isupper(c))
		return (c + ('a' - 'A'));
	return (c);
}
