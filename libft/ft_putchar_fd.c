/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnoon <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 08:48:27 by vnoon             #+#    #+#             */
/*   Updated: 2015/11/30 14:43:35 by vnoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "unistd.h"

static	void	ft_print_fd(unsigned short c, int fd)
{
	write(fd, (void *)&c, 1);
}

void			ft_putchar_fd(char c, int fd)
{
	unsigned short	c_utf;

	c_utf = 0xFF;
	c_utf &= (unsigned char)c;
	if (c_utf > 127)
	{
		ft_print_fd(0xC0 | (c_utf >> 6), fd);
		ft_print_fd(0x80 | (c_utf & 0x3F), fd);
	}
	else
	{
		write(fd, &c_utf, 1);
	}
}
