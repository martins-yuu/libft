/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mexpand.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 00:58:08 by yuuko             #+#    #+#             */
/*   Updated: 2024/06/25 03:49:42 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * @brief Changes the size of the memory block pointed to by `ptr` to `size`.
 *
 * If `ptr` is NULL, then the call is equivalent to malloc(size).
 *
 * If `size` is equal to zero, and `ptr` is not NULL, then the call is
 * equivalent to free(ptr).
 *
 * @param ptr A pointer to the memory block to expand.
 * @param size The new size of the memory block.
 * @param oldsize The old size of the memory block.
 * @return A pointer to the allocated memory. NULL if an error occurred.
 */
void	*ft_mexpand(void *ptr, size_t size, size_t oldsize)
{
	void	*new;

	if (!ptr)
		return (malloc(size));
	if (size == 0)
	{
		free(ptr);
		return (NULL);
	}
	new = malloc(size);
	if (!new)
		return (NULL);
	ft_memcpy(new, ptr, oldsize);
	free(ptr);
	return (new);
}
