/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 22:25:03 by yuuko             #+#    #+#             */
/*   Updated: 2024/03/22 22:26:53 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Returns the maximum of `a` and `b`.
 *
 * @param a An integer to compare.
 * @param b An integer to compare.
 * @return The value of the largest argument.
 */
int	ft_max(int a, int b)
{
	if (a > b)
		return (a);
	return (b);
}
