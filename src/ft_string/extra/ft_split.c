/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 20:48:04 by yuuko             #+#    #+#             */
/*   Updated: 2024/04/29 17:10:48 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stdlib.h"
#include "ft_string.h"
#include <stdlib.h>

static size_t	count_words(char const *s, char c);
static char		*next_word(const char **s, char c);

/**
 * @brief Allocates (with malloc(3)) and returns an array of strings obtained by
 * splitting ’s’ using the character ’c’ as a delimiter. The array must end with
 * a NULL pointer.
 *
 * @param s The string to be split.
 * @param c The delimiter character.
 * @return The array of new strings resulting from the split. NULL if the
 * allocation fails.
 */
char	**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	word_count;
	size_t	i;

	word_count = count_words(s, c);
	arr = ft_calloc((word_count + 1), sizeof(char *));
	if (!arr)
		return (NULL);
	i = 0;
	while (i < word_count)
	{
		arr[i] = next_word(&s, c);
		if (!arr[i])
			return (ft_freesplit(arr), NULL);
		i++;
	}
	return (arr);
}

static size_t	count_words(char const *s, char c)
{
	size_t	count;
	size_t	i;
	_Bool	new_word;

	count = 0;
	i = 0;
	new_word = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && !new_word)
		{
			count++;
			new_word = 1;
		}
		else if (s[i] == c)
			new_word = 0;
		i++;
	}
	return (count);
}

static char	*next_word(const char **s, char c)
{
	char	*end;
	size_t	len;
	char	*word;

	while (**s != '\0' && **s == c)
		(*s)++;
	end = ft_strchr(*s, c);
	if (end != NULL)
		len = end - *s;
	else
		len = ft_strlen(*s);
	word = ft_stnnew_size(*s, len);
	while (**s != '\0' && **s != c)
		(*s)++;
	return (word);
}
