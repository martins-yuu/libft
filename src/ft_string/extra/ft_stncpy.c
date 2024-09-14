/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stncpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martins <martins@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 22:44:16 by martins           #+#    #+#             */
/*   Updated: 2024/09/14 20:02:41 by martins          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string_int.h"

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
