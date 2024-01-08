/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 13:27:33 by yuuko             #+#    #+#             */
/*   Updated: 2024/03/15 17:03:04 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Checks for an uppercase letter.
 *
 * @param c The character to be checked.
 * @return A nonzero value if the character is an uppercase letter, zero
 * otherwise.
 */
int	ft_isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}
