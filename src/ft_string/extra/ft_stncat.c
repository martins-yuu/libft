/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stncat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martins <martins@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 22:46:16 by martins           #+#    #+#             */
/*   Updated: 2024/09/14 20:02:41 by martins          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string_int.h"

/**
 * @brief Appends the characters from the binary-safe string `src` to `dst`.
 *
 * @param dst The string to append to.
 * @param src The string to be appended.
 * @return The destination string. NULL if the allocation fails.
 */
t_string	ft_stncat(t_string dst, const char *src)
{
	return (ft_stncat_size(dst, src, ft_strlen(src)));
}
