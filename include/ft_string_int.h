/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_int.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martins <martins@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 21:30:23 by martins           #+#    #+#             */
/*   Updated: 2024/09/14 20:02:43 by martins          ###   ########.fr       */
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
