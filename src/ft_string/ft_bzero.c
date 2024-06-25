/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 14:21:43 by yuuko             #+#    #+#             */
/*   Updated: 2024/06/25 03:53:00 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include <stddef.h>

/**
 * @brief Erases the data in the `n` bytes of the memory starting at the
 * location pointed to by `s`, by writing zeros (bytes containing '\0') to that
 * area.
 *
 * @param s A pointer to the memory area to be erased.
 * @param n The number of bytes to be erased.
 */
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}
