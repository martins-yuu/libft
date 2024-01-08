/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 18:36:33 by yuuko             #+#    #+#             */
/*   Updated: 2024/03/24 01:04:50 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdio.h"
#include <unistd.h>

/**
 * @brief Outputs the integer `n` to the standard output in the specified base.
 *
 * @param n The integer to output.
 * @param base A string representing the base in which to output the integer.
 */
void	ft_putnbr_base(int n, const char *base)
{
	ft_putnbr_base_fd(n, base, STDOUT_FILENO);
}
