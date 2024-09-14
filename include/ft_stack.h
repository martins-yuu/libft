/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martins <martins@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 18:50:43 by martins           #+#    #+#             */
/*   Updated: 2024/09/14 20:02:41 by martins          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STACK_H
# define FT_STACK_H

# include <stdbool.h>
# include <stddef.h>

typedef struct s_stack	t_stack;

t_stack					*ft_stknew(void);
void					ft_stkfree(t_stack *stk, void (*del)(void *));
size_t					ft_stksize(const t_stack *stk);
bool					ft_stkisempty(const t_stack *stk);
void					*ft_stkpeek(const t_stack *stk);
bool					ft_stkpush(t_stack *stk, void *content);
void					*ft_stkpop(t_stack *stk);
bool					ft_stkswap(t_stack *stk);
bool					ft_stkrotate(t_stack *stk);
bool					ft_stkrrotate(t_stack *stk);

#endif
