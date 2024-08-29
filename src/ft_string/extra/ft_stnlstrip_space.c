/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stnlstrip_space.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 16:51:35 by yuuko             #+#    #+#             */
/*   Updated: 2024/08/28 23:32:40 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ctype.h"
#include "ft_string.h"

/**
 * @brief Strips the string from the left side of the white-space characters.
 *
 * @param s The string to strip.
 * @return The stripped string.
 */
t_string	ft_stnlstrip_space(t_string s)
{
	return (ft_stnlstrip_if(s, ft_isspace));
}
