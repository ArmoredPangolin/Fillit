/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnoon <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 09:14:57 by vnoon             #+#    #+#             */
/*   Updated: 2015/12/09 15:47:55 by vnoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	char	*cpy1;
	char	*cpy2;

	if (s1 == NULL || s2 == NULL)
		return (0);
	cpy1 = (char *)s1;
	cpy2 = (char *)s2;
	while ((*cpy1 != '\0' || *cpy2 != '\0') && n > 0)
	{
		if (*cpy1 != *cpy2)
			return (0);
		cpy1++;
		cpy2++;
		n--;
	}
	return (1);
}
