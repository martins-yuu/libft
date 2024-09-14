/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex_fd.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martins <martins@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 00:16:37 by martins           #+#    #+#             */
/*   Updated: 2024/09/14 20:02:43 by martins          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdio.h"
#include <stdbool.h>

/**
 * @brief Outputs the integer `n` to the given file descriptor in hexadecimal.
 *
 * @param n The integer to output.
 * @param upper Whether to use uppercase letters for the output.
 * @param fd The file descriptor on which to write.
 */
void	ft_putnbr_hex_fd(int n, bool upper, int fd)
{
	if (upper)
		ft_putnbr_base_fd(n, "0123456789ABCDEF", fd);
	else
		ft_putnbr_base_fd(n, "0123456789abcdef", fd);
}
