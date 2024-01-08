/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 21:39:14 by yuuko             #+#    #+#             */
/*   Updated: 2024/03/22 22:19:31 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Computes the absolute value of the integer argument `j`.
 *
 * @param j The integer to get the absolute value of.
 * @return The absolute value of the integer argument.
 */
int	ft_abs(int j)
{
	if (j < 0)
		return (-j);
	return (j);
}
