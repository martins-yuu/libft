/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_int.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martins <martins@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 18:50:43 by martins           #+#    #+#             */
/*   Updated: 2024/09/14 20:02:40 by martins          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STACK_INT_H
# define FT_STACK_INT_H

# include "ft_linkedlist.h"
# include "ft_stack.h"
# include <stddef.h>

struct		s_stack
{
	t_list	*top;
	size_t	size;
};

#endif
