/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnoon <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 17:20:58 by vnoon             #+#    #+#             */
/*   Updated: 2015/11/30 14:36:59 by vnoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "unistd.h"

static	void	ft_print(unsigned short c)
{
	write(1, (void *)&c, 1);
}

void			ft_putchar(char c)
{
	unsigned short	c_utf;

	c_utf = 0xFF;
	c_utf &= (unsigned char)c;
	if (c_utf > 127)
	{
		ft_print((0xC0 | (c_utf >> 6)));
		ft_print((0x80 | (c_utf & 0x3F)));
	}
	else
	{
		write(1, &c_utf, 1);
	}
}
