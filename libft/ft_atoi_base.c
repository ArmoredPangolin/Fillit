/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnoon <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 10:35:09 by vnoon             #+#    #+#             */
/*   Updated: 2015/11/30 12:05:42 by vnoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_get_base_digit_value(char digit)
{
	int	result;

	result = -1;
	if (ft_isdigit(digit) == 1)
		result = (digit - '0');
	if (digit >= 'a' && digit <= 'z')
		result = (digit - 'a' + 10);
	if (digit >= 'A' && digit <= 'Z')
		result = (digit - 'A' + 10);
	return (result);
}

static	int	ft_is_base_digit(char digit, size_t base)
{
	int	result;

	result = ft_get_base_digit_value(digit);
	if ((size_t)result < base && result >= 0)
		return (1);
	return (0);
}

int			ft_atoi_base(const char *str, size_t base)
{
	int		signe;
	int		result;
	int		i;

	if (base < 1 || base > 16)
		return (0);
	result = 0;
	i = 0;
	signe = 0;
	while ((*(str + i) == ' ') || (*(str + i) == '\t') ||
			(*(str + i) == '\v') || (*(str + i) == '\n') ||
			(*(str + i) == '\r') || (*(str + i) == '\f'))
		i++;
	if (*(str + i) == '-' && base == 10)
		signe = 1;
	else
		signe = (-1);
	if (((*(str + i) == '+') || (*(str + i) == '-')) && base == 10)
		i++;
	while ((ft_is_base_digit(*(str + i), base)) == 1)
	{
		result = result * base - ft_get_base_digit_value(*(str + i));
		i++;
	}
	return (result * signe);
}
