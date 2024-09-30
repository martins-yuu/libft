/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stntonumeric.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martins <martins@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 16:12:45 by martins           #+#    #+#             */
/*   Updated: 2024/09/29 21:28:38 by martins          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ctype.h"
#include "ft_string.h"
#include <stdbool.h>

/**
 * @brief Converts the string `s` to its numeric representation.
 *
 * This function will remove any spaces and leading zeros from the string. If
 * the string starts with a '+' or '-', the sign will be preserved.
 *
 * @warning If the conversion fails, the string will be left in an undefined
 * state.
 *
 * @param s The string to be converted.
 * @return `true` if the conversion was successful. `false` otherwise.
 */
bool	ft_stntonumeric(t_string s)
{
	char	sign;

	ft_stnstrip_space(s);
	if (ft_stnisempty(s))
		return (false);
	sign = '\0';
	if (*s == '+' || *s == '-')
	{
		sign = *s;
		ft_stnrange(s, 1, -1);
	}
	if (ft_stnisempty(s))
		return (false);
	ft_stnlstrip(s, '0');
	if (ft_stnisempty(s))
	{
		ft_stncpy_size(s, "0", sizeof(char));
		return (true);
	}
	if (!ft_strall(s, ft_isdigit))
		return (false);
	if (sign != '\0')
		ft_stnprepend_size(s, &sign, sizeof(char));
	return (true);
}
