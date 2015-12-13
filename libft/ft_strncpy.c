/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnoon <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 09:36:29 by vnoon             #+#    #+#             */
/*   Updated: 2015/11/29 19:54:15 by vnoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	char	*mem_dst;

	mem_dst = dst;
	while (n != 0 && *src != '\0')
	{
		*dst = *src;
		dst++;
		src++;
		n--;
	}
	while (n-- > 0)
	{
		*dst = '\0';
		dst++;
	}
	return (mem_dst);
}
