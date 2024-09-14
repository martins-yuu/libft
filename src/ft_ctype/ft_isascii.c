/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martins <martins@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 14:08:09 by martins           #+#    #+#             */
/*   Updated: 2024/09/14 20:02:43 by martins          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Checks whether c is a 7-bit unsigned char value that fits into the
 * ASCII character set.
 *
 * @param c The character to be checked.
 * @return A nonzero value if the character falls into the tested class, zero
 * otherwise.
 */
int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
