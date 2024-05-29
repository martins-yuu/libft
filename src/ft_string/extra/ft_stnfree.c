/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stnfree.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 03:37:15 by yuuko             #+#    #+#             */
/*   Updated: 2024/05/28 21:57:48 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string_int.h"
#include <ft_stdlib.h>

/**
 * @brief Frees the binary-safe string pointed to by `s`.
 *
 * @param s A pointer to the string to be freed.
 */
void	ft_stnfree(t_string s)
{
	if (!s)
		return ;
	free(ft_stnhdr(s));
}
