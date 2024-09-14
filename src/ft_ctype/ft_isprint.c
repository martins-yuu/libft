/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martins <martins@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 14:15:53 by martins           #+#    #+#             */
/*   Updated: 2024/09/14 20:02:41 by martins          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Checks for any printable character including space.
 *
 * @param c The character to be checked.
 * @return A nonzero value if the character is printable, zero otherwise.
 */
int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}
