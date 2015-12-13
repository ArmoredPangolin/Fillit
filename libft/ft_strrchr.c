/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnoon <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 16:29:01 by vnoon             #+#    #+#             */
/*   Updated: 2015/12/09 16:31:29 by vnoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		tempo;
	char	carac;

	tempo = ft_strlen(s) + 1;
	carac = (char)c;
	while (tempo-- != 0)
	{
		if (*(s + tempo) == carac)
			return ((char *)(s + tempo));
	}
	return (NULL);
}
