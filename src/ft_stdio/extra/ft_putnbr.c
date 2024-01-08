/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 18:36:33 by yuuko             #+#    #+#             */
/*   Updated: 2024/03/24 01:04:35 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdio.h"
#include <unistd.h>

/**
 * @brief Outputs the integer `n` to the standard output.
 *
 * @param n The integer to output.
 */
void	ft_putnbr(int n)
{
	ft_putnbr_fd(n, STDOUT_FILENO);
}
