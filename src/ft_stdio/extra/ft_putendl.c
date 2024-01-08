/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 18:36:00 by yuuko             #+#    #+#             */
/*   Updated: 2024/03/24 01:03:55 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdio.h"
#include <unistd.h>

/**
 * @brief Outputs the string `s` to the standard output, followed by a
 * newline.
 *
 * @param s The string to output.
 */
void	ft_putendl(char *s)
{
	ft_putendl_fd(s, STDOUT_FILENO);
}
