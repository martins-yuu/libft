/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stncmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 03:33:31 by yuuko             #+#    #+#             */
/*   Updated: 2024/05/28 21:51:53 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ctype.h"
#include "ft_stdlib.h"
#include "ft_string_int.h"

/**
 * @brief Compares the bytes of `s1` and `s2`.
 *
 * @param s1 The first string to be compared.
 * @param s2 The second string to be compared.
 * @param n The maximum number of bytes to be compared.
 * @return An integer less than, equal to, or greater than zero if the bytes of
 * `s1` is found, respectively, to be less than, to match, or be greater than
 * the bytes of `s2`.
 */
int	ft_stncmp(const t_string s1, const t_string s2)
{
	return (ft_memcmp(s1, s2, ft_abs(ft_stnlen(s1) - ft_stnlen(s2))));
}
