/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strall.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 14:50:19 by yuuko             #+#    #+#             */
/*   Updated: 2024/08/29 14:59:32 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <stddef.h>

/**
 * @brief Check if all characters in the string satisfy the condition of the
 * function `f`.
 *
 * @param s The string to be checked.
 * @param f The function to check the characters.
 * @return `true` if all characters satisfy the condition. `false` otherwise.
 */
bool	ft_strall(const char *s, int (*f)(int))
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (!f(s[i]))
			return (false);
		i++;
	}
	return (true);
}
