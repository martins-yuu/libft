/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stndup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martins <martins@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 03:48:50 by martins           #+#    #+#             */
/*   Updated: 2024/09/14 20:02:41 by martins          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string_int.h"

/**
 * @brief Duplicates the binary safe-string `s`.
 *
 * @param s The string to be duplicated.
 * @return The duplicated string. NULL if the allocation fails.
 */
t_string	ft_stndup(const t_string s)
{
	return (ft_stnnew_size(s, ft_stnlen(s)));
}
