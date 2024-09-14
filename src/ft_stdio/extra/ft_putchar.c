/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martins <martins@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 18:03:32 by martins           #+#    #+#             */
/*   Updated: 2024/09/14 20:06:14 by martins          ###   ########.fr       */
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
