/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 17:49:13 by yuuko             #+#    #+#             */
/*   Updated: 2024/06/25 03:52:50 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/**
 * @brief Compares the first `n` bytes (each interpreted as unsigned char) of
 * the memory areas `s1` and `s2`.
 *
 * @param s1 A pointer to the first memory area.
 * @param s2 A pointer to the second memory area.
 * @param n The number of bytes to be compared.
 * @return An integer less than, equal to, or greater than zero if the first `n`
 * bytes of `s1` is found, respectively, to be less than, to match, or be
 * greater than the first `n` bytes of `s2`. For a nonzero return value, the
 * sign is determined by the sign of the difference between the first pair of
 * bytes (interpreted as unsigned char) that differ in `s1` and `s2`. If `n` is
 * zero, the return value is zero.
 */
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		i++;
	}
	return (0);
}
