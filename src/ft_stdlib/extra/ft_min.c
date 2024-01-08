/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_min.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 21:38:59 by yuuko             #+#    #+#             */
/*   Updated: 2024/03/22 22:24:33 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Returns the minimum of `a` and `b`.
 *
 * @param a An integer to compare.
 * @param b An integer to compare.
 * @return The value of the smallest argument.
 */
int	ft_min(int a, int b)
{
	if (a < b)
		return (a);
	return (b);
}
