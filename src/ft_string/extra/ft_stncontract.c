/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stncontract.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martins <martins@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 18:56:03 by martins           #+#    #+#             */
/*   Updated: 2024/09/14 20:04:40 by martins          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdlib.h"
#include "ft_string_int.h"
#include <stddef.h>

/**
 * @brief Removes the free space at the end of the binary-safe string `s`.
 *
 * @param s The string to contract.
 * @return The contracted string. NULL if the allocation fails.
 */
t_string	ft_stncontract(t_string s)
{
	static const size_t		header_size = sizeof(struct s_string_header);
	size_t					len;
	struct s_string_header	*ptr;

	len = ft_stnlen(s);
	if (ft_stncap(s) - len == 0)
		return (s);
	ptr = ft_stnhdr(s);
	ptr = ft_mexpand(ptr, header_size + len + 1, header_size + len + 1);
	if (!ptr)
		return (NULL);
	s = ptr->buffer;
	ptr->capacity = len;
	return (s);
}
