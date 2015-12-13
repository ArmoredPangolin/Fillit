/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnoon <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 13:16:05 by vnoon             #+#    #+#             */
/*   Updated: 2015/11/27 10:06:55 by vnoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*tempo1;
	unsigned char	*tempo2;

	i = 0;
	tempo1 = (unsigned char *)s1;
	tempo2 = (unsigned char *)s2;
	while (n > i)
	{
		if (*(tempo1 + i) != *(tempo2 + i))
			return ((int)(*(tempo1 + i) - *(tempo2 + i)));
		i++;
	}
	return (0);
}
