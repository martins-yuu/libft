/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 18:50:43 by yuuko             #+#    #+#             */
/*   Updated: 2024/04/17 03:36:42 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STACK_H
# define FT_STACK_H

# include "ft_linkedlist.h"
# include <stdlib.h>

typedef struct s_stack
{
	t_list	*top;
	size_t	size;
}			t_stack;

t_stack		*ft_stknew(void);
void		ft_stkfree(t_stack *stk, void (*del)(void *));
size_t		ft_stksize(const t_stack *stk);
_Bool		ft_stkisempty(const t_stack *stk);
void		*ft_stkpeek(const t_stack *stk);
t_stack		*ft_stkpush(t_stack *stk, void *content);
void		*ft_stkpop(t_stack *stk);
void		*ft_stkswap(t_stack *stk);
void		*ft_stkrotate(t_stack *stk);
void		*ft_stkrrotate(t_stack *stk);

#endif
