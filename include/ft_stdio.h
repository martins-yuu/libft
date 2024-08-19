/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stdio.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 07:31:57 by yuuko             #+#    #+#             */
/*   Updated: 2024/08/19 20:13:12 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STDIO_H
# define FT_STDIO_H

# include <stdbool.h>

void	ft_putchar_fd(char c, int fd);
void	ft_putchar(char c);
void	ft_putstr_fd(char *s, int fd);
void	ft_putstr(char *s);
void	ft_putendl_fd(char *s, int fd);
void	ft_putendl(char *s);
void	ft_putnbr_fd(int n, int fd);
void	ft_putnbr(int n);
void	ft_putnbr_base_fd(int n, const char *base, int fd);
void	ft_putnbr_base(int n, const char *base);
void	ft_putnbr_hex_fd(int n, bool upper, int fd);
void	ft_putnbr_hex(int n, bool upper);
int		ft_printf(const char *format, ...);
char	*get_next_line(int fd);

#endif
