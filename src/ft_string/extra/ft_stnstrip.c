/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stnstrip.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 16:51:35 by yuuko             #+#    #+#             */
/*   Updated: 2024/08/18 17:16:19 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

/**
 * @brief Strips the string from the left and right side of the characters that
 * satisfy the function `f`.
 *
 * @param s The string to strip.
 * @param f The function to check the characters.
 * @return The stripped string.
 */
t_string	ft_stnstrip(t_string s, int (*f)(int))
{
	ft_stnlstrip(s, f);
	ft_stnrstrip(s, f);
	return (s);
}
