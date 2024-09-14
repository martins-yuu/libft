/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martins <martins@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 18:36:33 by martins           #+#    #+#             */
/*   Updated: 2024/09/14 20:02:43 by martins          ###   ########.fr       */
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
