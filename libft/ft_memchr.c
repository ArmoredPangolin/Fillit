/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnoon <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 12:48:09 by vnoon             #+#    #+#             */
/*   Updated: 2015/11/26 19:57:41 by vnoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char		carac;
	unsigned char		*mem_space;

	carac = (unsigned char)c;
	mem_space = (unsigned char *)s;
	while (n > 0)
	{
		if (*mem_space == carac)
			return ((void *)(mem_space));
		mem_space++;
		n--;
	}
	return (NULL);
}
