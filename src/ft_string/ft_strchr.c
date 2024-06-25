/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 15:10:54 by yuuko             #+#    #+#             */
/*   Updated: 2024/06/25 03:52:29 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

/**
 * @brief Returns a pointer to the first occurrence of the character `c` in the
 * string `s`.
 *
 * @note The terminating null byte is considered part of the string, so that if
 * `c` is specified as `\0`, this function returns a pointer to the terminator.
 *
 * @param s The string to be scanned.
 * @param c The character to be located.
 * @return The pointer to the matched character or NULL if the character is not
 * found.
 */
char	*ft_strchr(const char *s, int c)
{
	return (ft_memchr(s, c, ft_strlen(s) + 1));
}
