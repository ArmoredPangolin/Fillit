/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnoon <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 16:36:26 by vnoon             #+#    #+#             */
/*   Updated: 2015/12/09 17:01:43 by vnoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;
	unsigned int	j;

	if (*s2 == '\0')
		return ((char *)s1);
	i = 0;
	while (s1[i] != '\0' && i < n)
	{
		j = 0;
		while (s2[j] == '\0' || s2[j] == s1[i + j])
		{
			if ((i + j) > n)
				return (0);
			if (*(s2 + j) == '\0')
				return ((char *)&s1[i]);
			j++;
		}
		i++;
	}
	return (0);
}
