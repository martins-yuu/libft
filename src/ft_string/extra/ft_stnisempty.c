/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stnisempty.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 23:12:31 by yuuko             #+#    #+#             */
/*   Updated: 2024/08/22 23:23:13 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string_int.h"
#include <stdbool.h>

/**
 * @brief Checks if the binary-safe string is empty.
 *
 * @param s The string to check.
 * @return `true` if the string is empty. `false` otherwise.
 */
bool	ft_stnisempty(const t_string s)
{
	return (ft_stnlen(s) == 0);
}
