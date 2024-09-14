/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stnisempty.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martins <martins@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 23:12:31 by martins           #+#    #+#             */
/*   Updated: 2024/09/14 20:02:41 by martins          ###   ########.fr       */
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
