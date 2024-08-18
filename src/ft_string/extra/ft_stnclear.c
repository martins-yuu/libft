/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stnclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 18:15:37 by yuuko             #+#    #+#             */
/*   Updated: 2024/08/18 18:19:31 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string_int.h"

/**
 * @brief Clears the binary-safe string.
 *
 * @param s The string to clear.
 * @return The cleared string.
 */
t_string	ft_stnclear(t_string s)
{
	ft_stnsetlen(s, 0);
	s[0] = '\0';
	return (s);
}
