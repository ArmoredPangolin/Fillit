/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnoon <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 16:43:16 by vnoon             #+#    #+#             */
/*   Updated: 2015/12/07 15:37:10 by vnoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		signe;
	int		result;
	int		i;

	result = 0;
	i = 0;
	signe = 0;
	while ((*(str + i) == ' ') || (*(str + i) == '\t') ||
			(*(str + i) == '\v') || (*(str + i) == '\n') ||
			(*(str + i) == '\r') || (*(str + i) == '\f'))
		i++;
	if (*(str + i) == '-')
		signe = 1;
	else
		signe = (-1);
	if ((*(str + i) == '+') || (*(str + i) == '-'))
		i++;
	while ((ft_isdigit(*(str + i))) == 1)
	{
		result = result * 10 - (*(str + i) - '0');
		i++;
	}
	return (result * signe);
}
