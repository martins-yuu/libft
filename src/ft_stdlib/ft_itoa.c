/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martins <martins@student.42sp.org.br>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/06 19:29:06 by martins           #+#    #+#             */
/*   Updated: 2024/09/14 20:02:41 by martins          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>

#define BASE 10

static size_t	count_digits(int n);

/**
 * @brief Allocates (with malloc(3)) and returns a string representing the
 * integer received as an argument. Negative numbers must be handled.
 *
 * @param n The integer to convert.
 * @return The string representing the integer. NULL if the allocation fails.
 */
char	*ft_itoa(int n)
{
	char	*str;
	size_t	size;
	long	nb;

	size = count_digits(n);
	str = malloc(size + 1);
	if (!str)
		return (NULL);
	str[size--] = '\0';
	nb = n;
	if (n < 0)
		nb *= -1;
	while (size != 0)
	{
		str[size] = (nb % BASE) + '0';
		nb /= BASE;
		size--;
	}
	if (n < 0)
		str[size] = '-';
	else
		str[size] = (nb % BASE) + '0';
	return (str);
}

static size_t	count_digits(int n)
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
		n /= BASE;
	}
	return (count);
}
