/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 18:36:33 by yuuko             #+#    #+#             */
/*   Updated: 2024/03/24 01:02:37 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdio.h"
#include "ft_string.h"
#include <stdlib.h>

/**
 * @brief Outputs the integer `n` to the given file descriptor in the specified
 * base.
 *
 * @param n The integer to output.
 * @param base A string representing the base in which to output the integer.
 * @param fd The file descriptor on which to write.
 */
void	ft_putnbr_base_fd(int n, const char *base, int fd)
{
	unsigned int	nb;
	size_t			base_size;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		nb = -n;
	}
	else
		nb = n;
	base_size = ft_strlen(base);
	if (nb >= base_size)
		ft_putnbr_base_fd(nb / base_size, base, fd);
	ft_putchar_fd(base[nb % base_size], fd);
}
