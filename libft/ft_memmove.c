/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnoon <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 10:19:03 by vnoon             #+#    #+#             */
/*   Updated: 2015/11/29 19:20:25 by vnoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const char	*pen;
	char		*sheet;

	if (dst < src)
		return (ft_memcpy(dst, src, len));
	else
	{
		sheet = dst;
		while ((int)--len >= 0)
		{
			pen = (src + len);
			*(sheet + len) = *pen;
		}
		return (dst);
	}
}
