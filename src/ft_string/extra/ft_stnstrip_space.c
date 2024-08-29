/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stnstrip_space.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 16:51:35 by yuuko             #+#    #+#             */
/*   Updated: 2024/08/28 23:32:25 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ctype.h"
#include "ft_string.h"

/**
 * @brief Strips the string from the left and right side of the white-space
 * characters.
 *
 * @param s The string to be stripped.
 * @return The stripped string.
 */
t_string	ft_stnstrip_space(t_string s)
{
	return (ft_stnstrip_if(s, ft_isspace));
}
