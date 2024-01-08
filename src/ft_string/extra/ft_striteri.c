/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 18:42:49 by yuuko             #+#    #+#             */
/*   Updated: 2024/03/24 00:53:23 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Applies the function `f` to each character of the string passed as
 * argument, and passing its index as first argument. Each character is passed
 * by address to f to be modified if necessary.
 *
 * @param s The string on which to iterate.
 * @param f The function to apply to each character.
 */
void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
