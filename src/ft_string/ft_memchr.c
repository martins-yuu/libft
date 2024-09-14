/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martins <martins@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 14:58:40 by martins           #+#    #+#             */
/*   Updated: 2024/09/15 20:20:46 by martins          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/**
 * @brief Scans the initial `n` bytes of the memory area pointed to by `s` for
 * the first instance of `c`.
 *
 * @note Both `c` and the bytes of the memory area pointed to by `s` are
 * interpreted as unsigned char.
 *
 * @param s A pointer to the memory area to be scanned.
 * @param c The character to be located.
 * @param n The number of bytes to be scanned.
 * @return A pointer to the matching byte or NULL if the character does not
 * occur in the given memory area.
 */
void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return ((char *)s + i);
		i++;
	}
	return (NULL);
}
