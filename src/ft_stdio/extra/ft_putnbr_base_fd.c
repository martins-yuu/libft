/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martins <martins@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 18:36:33 by martins           #+#    #+#             */
/*   Updated: 2024/09/14 20:02:43 by martins          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdio.h"
#include "ft_string.h"
#include <stddef.h>

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
