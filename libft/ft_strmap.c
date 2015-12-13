/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnoon <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 08:23:16 by vnoon             #+#    #+#             */
/*   Updated: 2015/12/09 15:45:27 by vnoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*map;
	char	*mem_map;

	if (s == NULL || f == NULL)
		return (NULL);
	map = ft_strdup(s);
	if (map == NULL)
		return (NULL);
	mem_map = map;
	while (*s != '\0')
	{
		*map = f(*s);
		s++;
		map++;
	}
	return (mem_map);
}
