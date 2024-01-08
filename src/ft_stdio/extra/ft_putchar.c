/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 18:03:32 by yuuko             #+#    #+#             */
/*   Updated: 2024/03/24 01:05:45 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdio.h"
#include <unistd.h>

/**
 * @brief Outputs the character `c` to the standard output.
 *
 * @param c The character to output.
 */
void	ft_putchar(char c)
{
	ft_putchar_fd(c, STDOUT_FILENO);
}
