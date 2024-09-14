/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mexpand.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martins <martins@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 00:58:08 by martins           #+#    #+#             */
/*   Updated: 2024/09/14 20:02:43 by martins          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdlib.h"
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
	new = ft_calloc(size, sizeof(char));
	if (!new)
		return (NULL);
	ft_memcpy(new, ptr, oldsize);
	free(ptr);
	return (new);
}
