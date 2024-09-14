/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stnstrip.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martins <martins@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 16:51:35 by martins           #+#    #+#             */
/*   Updated: 2024/09/14 20:02:41 by martins          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

/**
 * @brief Strips the string from the left and right side of the character `c`.
 *
 * @param s The string to be stripped.
 * @param c The character to strip.
 * @return The stripped string.
 */
t_string	ft_stnstrip(t_string s, char c)
{
	ft_stnlstrip(s, c);
	ft_stnrstrip(s, c);
	return (s);
}
