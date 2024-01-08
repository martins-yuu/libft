/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 18:28:56 by yuuko             #+#    #+#             */
/*   Updated: 2024/03/24 01:04:19 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdio.h"
#include <unistd.h>

/**
 * @brief Outputs the string `s` to the standard output.
 *
 * @param s The string to output.
 */
void	ft_putstr(char *s)
{
	ft_putstr_fd(s, STDOUT_FILENO);
}
