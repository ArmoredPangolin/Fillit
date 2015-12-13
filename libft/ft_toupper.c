/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnoon <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 17:00:39 by vnoon             #+#    #+#             */
/*   Updated: 2015/11/29 14:59:42 by vnoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	unsigned char carac;

	carac = (unsigned char)c;
	if (ft_isalpha(c))
	{
		if (carac >= 'a' && carac <= 'z')
			return ((int)(carac + ('A' - 'a')));
	}
	return (c);
}
