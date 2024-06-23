/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stdlib.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 07:32:16 by yuuko             #+#    #+#             */
/*   Updated: 2024/06/23 01:51:24 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STDLIB_H
# define FT_STDLIB_H

# include <stddef.h>

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

#endif
