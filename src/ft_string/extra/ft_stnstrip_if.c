/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stnstrip_if.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martins <martins@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 16:51:35 by martins           #+#    #+#             */
/*   Updated: 2024/09/14 20:02:43 by martins          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

/**
 * @brief Strips the string from the left and right side of the characters that
 * satisfy the function `f`.
 *
 * @param s The string to be stripped.
 * @param f The function to check the characters.
 * @return The stripped string.
 */
t_string	ft_stnstrip_if(t_string s, int (*f)(int))
{
	ft_stnlstrip_if(s, f);
	ft_stnrstrip_if(s, f);
	return (s);
}
