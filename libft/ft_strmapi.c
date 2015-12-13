/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnoon <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 08:48:17 by vnoon             #+#    #+#             */
/*   Updated: 2015/12/09 15:46:10 by vnoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*map;
	char			*mem_map;
	unsigned int	i;

	if (s == NULL || f == NULL)
		return (NULL);
	map = ft_strdup(s);
	if (map == NULL)
		return (NULL);
	mem_map = map;
	i = 0;
	while (*map != '\0')
	{
		*map = f(i, *map);
		map++;
		i++;
	}
	return (mem_map);
}
