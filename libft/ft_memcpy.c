/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnoon <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 08:12:29 by vnoon             #+#    #+#             */
/*   Updated: 2015/11/26 19:57:41 by vnoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	const char	*pen;
	char		*sheet;

	i = 0;
	sheet = (char *)dst;
	while (i < n)
	{
		pen = (src + i);
		*(sheet + i) = *pen;
		i++;
	}
	return (dst);
}
