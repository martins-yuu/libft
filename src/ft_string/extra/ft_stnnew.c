/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stnnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martins <martins@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 02:47:46 by martins           #+#    #+#             */
/*   Updated: 2024/09/14 20:02:43 by martins          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string_int.h"

/**
 * @brief Allocates (with malloc(3)) and returns a new binary-safe string.
 *
 * @param s The content to create the string with.
 * @return The new string.
 */
t_string	ft_stnnew(const char *s)
{
	if (!s)
		return (ft_stnnew_empty());
	return (ft_stnnew_size(s, ft_strlen(s)));
}
