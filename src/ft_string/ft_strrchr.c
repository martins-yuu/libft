/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 15:17:37 by yuuko             #+#    #+#             */
/*   Updated: 2024/03/24 01:10:40 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include <stdlib.h>

/**
 * @brief Returns a pointer to the last occurrence of the character `c` in the
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
char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s);
	while (&s[i] != s && s[i] != (char)c)
		i--;
	if (s[i] == (char)c)
		return ((char *)&s[i]);
	return (NULL);
}
