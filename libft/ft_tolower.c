/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnoon <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 17:06:59 by vnoon             #+#    #+#             */
/*   Updated: 2015/11/27 18:01:46 by vnoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	unsigned char carac;

	carac = (unsigned char)c;
	if (ft_isalpha(c))
	{
		if (carac >= 'A' && carac <= 'Z')
			return ((int)(carac + ('a' - 'A')));
	}
	return (c);
}
