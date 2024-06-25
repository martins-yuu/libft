/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 17:00:39 by yuuko             #+#    #+#             */
/*   Updated: 2024/06/25 03:51:12 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

/**
 * @brief Locates the first occurrence of the null-terminated string `little` in
 * the string `big`, where not more than `len` characters are searched.
 *
 * @note Characters that appear after a `\0' character are not searched.
 *
 * @param big The string to be scanned.
 * @param little The string to be searched for.
 * @param len The maximum number of characters to be searched.
 * @return If `little` is an empty string, `big` is returned; if `little` occurs
 * nowhere in `big`, NULL is returned; otherwise a pointer to the first
 * character of the first occurrence of `little` is returned.
 */
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*little == '\0')
		return ((char *)big);
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while (little[j] == big[i + j] && i + j < len)
		{
			if (little[j + 1] == '\0')
				return ((char *)&big[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
