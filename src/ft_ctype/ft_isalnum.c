/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 13:52:58 by yuuko             #+#    #+#             */
/*   Updated: 2024/03/22 22:53:35 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ctype.h"

/**
 * @brief Checks for an alphanumeric character.
 *
 * It is equivalent to (isalpha(c) || isdigit(c)).
 *
 * @param c The character to be checked.
 * @return A nonzero value if the character is an alphanumeric character, zero
 * otherwise.
 */
int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
