/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stnfree.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 03:37:15 by yuuko             #+#    #+#             */
/*   Updated: 2024/05/17 23:38:16 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include <ft_stdlib.h>

/**
 * @brief Frees the binary-safe string pointed to by `s`.
 *
 * @param s A pointer to the string to be freed.
 */
void	ft_stnfree(t_string s)
{
	static const size_t		header_size = sizeof(struct s_string_header);
	struct s_string_header	*ptr;

	if (!s)
		return ;
	ptr = (struct s_string_header *)(s - header_size);
	free(ptr);
}
