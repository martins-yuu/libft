/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stncpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 22:44:16 by yuuko             #+#    #+#             */
/*   Updated: 2024/04/01 05:16:58 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

/**
 * @brief Copies the characters from the binary-safe string `src` to `dst`.
 *
 * @param dst The string to copy to.
 * @param src The string to copy from.
 * @return The copied string. NULL if the allocation fails.
 */
t_string	ft_stncpy(t_string dst, const char *src)
{
	return (ft_stncpy_size(dst, src, ft_strlen(src)));
}
