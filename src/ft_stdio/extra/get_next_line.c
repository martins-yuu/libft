/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuuko <yuuko@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 17:02:10 by yuuko             #+#    #+#             */
/*   Updated: 2024/06/25 17:19:05 by yuuko            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 128
#endif

/**
 * @brief TODO: Returns a line from the file descriptor `fd`.
 *
 * Repeated calls to this function reads the text file pointed to by the file
 * descriptor, one line at a time.
 *
 * @note The returned line does not include the terminating newline ('\n')
 * character.
 *
 * @param fd The file descriptor to read from.
 * @return The line read. NULL if there is nothing else to read or if an error
 * occured.
 */
char	*get_next_line(int fd __attribute__((unused)))
{
	return (NULL);
}
