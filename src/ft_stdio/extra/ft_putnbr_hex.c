/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martins <martins@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 00:15:36 by martins           #+#    #+#             */
/*   Updated: 2024/09/14 20:02:41 by martins          ###   ########.fr       */
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
