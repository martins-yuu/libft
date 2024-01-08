/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_llabs.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 21:39:14 by yuuko             #+#    #+#             */
/*   Updated: 2024/03/22 22:21:03 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Computes the absolute value of the integer argument `j`.
 *
 * @param j The integer to get the absolute value of.
 * @return The absolute value of the integer argument.
 */
long long	ft_abs(long long j)
{
	if (j < 0)
		return (-j);
	return (j);
}
