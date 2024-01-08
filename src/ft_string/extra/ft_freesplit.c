/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_freesplit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 23:11:06 by yuuko             #+#    #+#             */
/*   Updated: 2024/04/29 16:50:35 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include <stdlib.h>

/**
 * @brief Clears the memory area pointed to by `s`.
 *
 * @param s A pointer to the memory area to be cleared.
 */
void	ft_freesplit(char **s)
{
	size_t	i;

	i = 0;
	while (s[i] != NULL)
	{
		ft_stnfree(s[i]);
		i++;
	}
	free(s);
}
