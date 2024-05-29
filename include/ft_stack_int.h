/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_int.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 18:50:43 by yuuko             #+#    #+#             */
/*   Updated: 2024/05/28 22:31:07 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STACK_INT_H
# define FT_STACK_INT_H

# include "ft_linkedlist.h"
# include "ft_stack.h"
# include <stdlib.h>

struct		s_stack
{
	t_list	*top;
	size_t	size;
};

#endif
