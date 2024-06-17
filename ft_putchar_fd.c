/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: antandre <antandre@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 15:52:36 by antandre          #+#    #+#             */
/*   Updated: 2024/06/17 17:22:20 by antandre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*
Envía el carácter ’c’ al file descriptor
especificado.
*/

void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}
