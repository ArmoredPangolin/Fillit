/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnoon <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 16:15:21 by vnoon             #+#    #+#             */
/*   Updated: 2015/11/28 12:59:44 by vnoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char carac;

	carac = (char)c;
	while (*s != '\0')
	{
		if (*s == carac)
			return ((char *)s);
		s++;
	}
	if (*s == carac)
		return ((char *)s);
	return (NULL);
}
