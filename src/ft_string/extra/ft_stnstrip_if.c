/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stnstrip_if.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 16:51:35 by yuuko             #+#    #+#             */
/*   Updated: 2024/08/28 23:31:23 by yuuko            ###   ########.fr       */
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
