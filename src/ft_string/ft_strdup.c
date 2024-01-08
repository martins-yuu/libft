/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 17:43:26 by yuuko             #+#    #+#             */
/*   Updated: 2024/03/24 00:48:56 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include <stdlib.h>

/**
 * @brief Returns a pointer to a new string which is a duplicate of the string
 * `s`. Memory for the new string is obtained with malloc(3), and can be freed
 * with free(3).
 *
 * @param s The string to be duplicated.
 * @return A pointer to the duplicated string. NULL if the allocation fails.
 */
char	*ft_strdup(const char *s)
{
	char	*str;
	size_t	len;

	len = ft_strlen(s);
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	ft_strlcpy(str, s, len + 1);
	return (str);
}
