/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martins <martins@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 14:07:25 by martins           #+#    #+#             */
/*   Updated: 2024/09/14 20:02:41 by martins          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/**
 * @brief Calculates the length of the string pointed to by `s`, excluding the
 * terminating null byte ('\0').
 *
 * @param s The string to be scanned.
 * @return The number of bytes in the string pointed to by `s`.
 */
size_t	ft_strlen(const char *s)
{
	char	*str;

	str = (char *)s;
	while (*str != '\0')
		str++;
	return (str - s);
}
