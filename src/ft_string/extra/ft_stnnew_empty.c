/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stnnew_empty.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 00:58:25 by yuuko             #+#    #+#             */
/*   Updated: 2024/08/13 03:34:48 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

/**
 * @brief Allocates (with malloc(3)) and returns a new, empty, binary-safe
 * string.
 *
 * @return The new string.
 */
t_string	ft_stnnew_empty(void)
{
	return (ft_stnnew_size("", 0));
}
