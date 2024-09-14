/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martins <martins@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 20:28:55 by martins           #+#    #+#             */
/*   Updated: 2024/09/14 20:06:21 by martins          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include <stddef.h>
#include <stdlib.h>

static size_t	count_digits(int n, size_t base_size);

/**
 * @brief Allocates (with malloc(3)) and returns a string representing the
 * integer received as an argument in the specified base. Negative numbers must
 * be handled.
 *
 * @param n The integer to convert.
 * @param base A string representing the base to convert to.
 * @return The string representing the integer. NULL if the allocation fails.
 */
char	*ft_itoa_base(int n, const char *base)
{
	char	*str;
	size_t	size;
	long	nb;
	size_t	base_size;

	base_size = ft_strlen(base);
	size = count_digits(n, base_size);
	str = malloc(size + 1);
	if (!str)
		return (NULL);
	str[size--] = '\0';
	nb = n;
	if (n < 0)
		nb *= -1;
	while (size != 0)
	{
		str[size] = base[nb % base_size];
		nb /= base_size;
		size--;
	}
	if (n < 0)
		str[size] = '-';
	else
		str[size] = base[nb % base_size];
	return (str);
}

static size_t	count_digits(int n, size_t base_size)
{
	size_t	count;

	if (n == 0)
		return (1);
	count = 0;
	if (n < 0)
		count++;
	while (n != 0)
	{
		count++;
		n /= (int)base_size;
	}
	return (count);
}
