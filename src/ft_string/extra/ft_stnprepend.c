/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stnprepend.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martins <martins@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 23:59:21 by martins           #+#    #+#             */
/*   Updated: 2024/09/14 20:02:41 by martins          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string_int.h"

/**
 * @brief Prepends the characters from the binary-safe string `src` to `dst`.
 *
 * @param dst The string to prepend to.
 * @param src The string to be prepended.
 * @return The destination string. NULL if the allocation fails.
 */
t_string	ft_stnprepend(t_string dst, const char *src)
{
	return (ft_stnprepend_size(dst, src, ft_strlen(src)));
}
