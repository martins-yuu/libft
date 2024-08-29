/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stnrstrip_space.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 16:51:35 by yuuko             #+#    #+#             */
/*   Updated: 2024/08/28 23:31:32 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ctype.h"
#include "ft_string.h"

/**
 * @brief Strips the binary-safe string `s` from the right side of the
 * white-space characters.
 *
 * @param s The string to be stripped.
 * @return The stripped string.
 */
t_string	ft_stnrstrip_space(t_string s)
{
	return (ft_stnrstrip_if(s, ft_isspace));
}
