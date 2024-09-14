/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martins <martins@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 20:02:08 by martins           #+#    #+#             */
/*   Updated: 2024/09/14 20:02:41 by martins          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Checks for white-space characters.
 *
 * In the "C" and "POSIX" locales, these are: space, form-feed ('\f'), newline
 * ('\n'), carriage return ('\r'), horizontal tab ('\t'), and vertical tab
 * ('\v').
 *
 * @param c The character to be checked.
 * @return A nonzero value if the character is a white-space character, zero
 * otherwise.
 */
int	ft_isspace(int c)
{
	return ((c >= 9 && c <= 13) || c == 32);
}
