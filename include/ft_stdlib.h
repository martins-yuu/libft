/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stdlib.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 07:32:16 by yuuko             #+#    #+#             */
/*   Updated: 2024/08/29 01:12:43 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STDLIB_H
# define FT_STDLIB_H

# include <stddef.h>
# include <sys/types.h>

int			ft_atoi(const char *nptr);
long long	ft_atoll(const char *nptr);
void		*ft_calloc(size_t nmemb, size_t size);
void		*ft_mexpand(void *ptr, size_t size, size_t oldsize);
char		*ft_itoa(int n);
int			ft_atoi_base(const char *nptr, const char *base);
char		*ft_itoa_base(int n, const char *base);
int			ft_max(int a, int b);
int			ft_min(int a, int b);
int			ft_abs(int j);
long long	ft_llabs(long long j);
void		ft_swap(void *a, void *b, size_t size);
size_t		ft_setrange(ssize_t *start, ssize_t *end, size_t len);

#endif
