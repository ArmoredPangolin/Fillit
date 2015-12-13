/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnoon <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 12:35:45 by vnoon             #+#    #+#             */
/*   Updated: 2015/11/26 19:57:40 by vnoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	unsigned char carac;

	carac = (unsigned char)c;
	if (ft_isalpha(c) == 1)
	{
		return (1);
	}
	if (ft_isdigit(c) == 1)
	{
		return (1);
	}
	return (0);
}
