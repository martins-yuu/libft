/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martins <martins@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 13:54:53 by martins           #+#    #+#             */
/*   Updated: 2024/09/14 20:02:41 by martins          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ctype.h"

/**
 * @brief Checks for an alphabetic character.
 *
 * In the standard "C" locale, it is equivalent to (isupper(c) || islower(c)).
 * In some locales, there may be additional characters for which isalpha() is
 * true—letters which are neither uppercase nor lowercase.
 *
 * @param c The character to be checked.
 * @return A nonzero value if the character is an alphabetic character, zero
 * otherwise.
 */
int	ft_isalpha(int c)
{
	return (ft_isupper(c) || ft_islower(c));
}
