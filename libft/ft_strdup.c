/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnoon <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 13:36:29 by vnoon             #+#    #+#             */
/*   Updated: 2015/11/28 12:33:15 by vnoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdlib.h"

char	*ft_strdup(const char *s1)
{
	int		length;
	char	*mem_str;

	length = ft_strlen(s1);
	if ((mem_str = (char *)malloc((length + 1) * sizeof(char))))
	{
		ft_strcpy(mem_str, s1);
		return (mem_str);
	}
	else
		return (NULL);
}
