/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 00:15:36 by yuuko             #+#    #+#             */
/*   Updated: 2024/08/12 00:45:10 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdio.h"
#include <stdbool.h>
#include <unistd.h>

/**
 * @brief Outputs the integer `n` to the given file descriptor in hexadecimal.
 *
 * @param n The integer to output.
 * @param upper Whether to use uppercase letters for the output.
 * @param fd The file descriptor on which to write.
 */
void	ft_putnbr_hex(int n, bool upper)
{
	ft_putnbr_hex_fd(n, upper, STDOUT_FILENO);
}
