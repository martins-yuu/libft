/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_setrange.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martins <martins@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 00:03:18 by martins           #+#    #+#             */
/*   Updated: 2024/09/14 20:02:43 by martins          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <sys/types.h>

/**
 * @brief Returns the length of the range of indexes, taking into account
 * negative values. If `start` or `end` is negative, this function sets it to
 * the correct positive value in relation to the length of the memory block.
 *
 * If the start index is negative, it is converted to a positive value by adding
 * the length of the memory block to it. If the result is still negative, it is
 * set to 0. The same is done for the end index. If the start index is greater
 * than the end index, the function returns 0.
 *
 * @param start The start index.
 * @param end The end index.
 * @param len The length of the memory block.
 * @return The length of the range.
 */
size_t	ft_setrange(ssize_t *start, ssize_t *end, size_t len)
{
	if (*start < 0)
	{
		*start = len + *start;
		if (*start < 0)
			*start = 0;
	}
	if (*end < 0)
	{
		*end = len + *end;
		if (*end < 0)
			*end = 0;
	}
	if (*start > *end)
		return (0);
	return (*end - *start + 1);
}
