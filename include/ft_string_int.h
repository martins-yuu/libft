/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_int.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 21:30:23 by yuuko             #+#    #+#             */
/*   Updated: 2024/06/23 01:51:32 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STRING_INT_H
# define FT_STRING_INT_H

# include "ft_string.h"
# include <stddef.h>

struct					s_string_header
{
	size_t				size;
	size_t				capacity;
	char				buffer[];
};

struct s_string_header	*ft_stnhdr(const t_string s);
void					ft_stnsetlen(t_string s, size_t newsize);
void					ft_stnsetcap(t_string s, size_t newsize);

#endif
