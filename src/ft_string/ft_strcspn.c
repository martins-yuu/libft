/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 13:30:54 by yuuko             #+#    #+#             */
/*   Updated: 2024/06/25 03:52:22 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/**
 * @brief Calculate the length of the initial segment of `s` which consists
 * entirely of bytes not in `reject`.
 *
 * @param s The string to be scanned.
 * @param reject A string containing the characters to match.
 * @return The number of bytes in the initial segment of `s` which are not in
 * the string `reject`.
 */
size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (reject[j] != '\0')
		{
			if (s[i] == reject[j])
				return (i);
			j++;
		}
		i++;
	}
	return (i);
}
