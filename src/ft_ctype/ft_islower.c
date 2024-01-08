/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_islower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 13:49:52 by yuuko             #+#    #+#             */
/*   Updated: 2024/03/15 17:02:58 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Checks for a lowercase character.
 *
 * @param c The character to be checked.
 * @return A nonzero value if the character is a lowercase letter, zero
 * otherwise.
 */
int	ft_islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
