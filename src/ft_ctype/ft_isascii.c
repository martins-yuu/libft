/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 14:08:09 by yuuko             #+#    #+#             */
/*   Updated: 2024/03/15 17:02:49 by yuuko            ###   ########.fr       */
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
