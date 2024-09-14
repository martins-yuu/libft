/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martins <martins@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/22 22:25:03 by martins           #+#    #+#             */
/*   Updated: 2024/09/14 20:06:25 by martins          ###   ########.fr       */
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
