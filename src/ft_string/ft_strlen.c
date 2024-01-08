/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 14:07:25 by yuuko             #+#    #+#             */
/*   Updated: 2024/03/24 00:47:40 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/**
 * @brief Calculates the length of the string pointed to by `s`, excluding the
 * terminating null byte ('\0').
 *
 * @param s The string to be scanned.
 * @return Number of bytes in the string pointed to by `s`.
 */
size_t	ft_strlen(const char *s)
{
	char	*str;

	str = (char *)s;
	while (*str != '\0')
		str++;
	return (str - s);
}
