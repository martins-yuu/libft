/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stnfree.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martins <martins@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 03:37:15 by martins           #+#    #+#             */
/*   Updated: 2024/09/14 20:02:41 by martins          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string_int.h"
#include <stdlib.h>

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
