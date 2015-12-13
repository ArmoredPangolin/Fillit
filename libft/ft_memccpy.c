/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnoon <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 20:37:23 by vnoon             #+#    #+#             */
/*   Updated: 2015/12/07 20:37:35 by vnoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*src2;
	unsigned char	*dst2;
	unsigned int	i;
	unsigned char	car;

	src2 = (unsigned char *)src;
	dst2 = (unsigned char *)dst;
	car = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		dst2[i] = src2[i];
		if (dst2[i] == car)
			return (dst + i + 1);
		i++;
	}
	return (NULL);
}
