/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 23:11:06 by yuuko             #+#    #+#             */
/*   Updated: 2024/03/24 00:52:13 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/**
 * @brief Clears the memory area pointed to by `s` by calling `del` on each
 * element and then free the pointer.
 *
 * @param s A pointer to the memory area to be cleared.
 * @param del The function used to clear the memory area.
 */
void	ft_memclear(void **s, void (*del)(void *))
{
	size_t	i;

	i = 0;
	while (s[i] != NULL)
	{
		del(s[i]);
		i++;
	}
	free(s);
}
