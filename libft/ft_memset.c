/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnoon <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 09:19:55 by vnoon             #+#    #+#             */
/*   Updated: 2015/11/27 17:33:24 by vnoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	value;
	char			*printer;

	value = (unsigned char)c;
	printer = b;
	while (len > 0)
	{
		*printer = c;
		printer++;
		len--;
	}
	return (b);
}
