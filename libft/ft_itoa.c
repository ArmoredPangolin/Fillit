/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnoon <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 16:47:13 by vnoon             #+#    #+#             */
/*   Updated: 2015/11/28 12:15:21 by vnoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*str;
	int		nb_digit;
	int		mem_n;

	if (n < 0)
		nb_digit = 2;
	else
		nb_digit = 1;
	mem_n = n;
	while ((mem_n /= 10) != 0)
		nb_digit++;
	if ((str = ft_strnew(nb_digit)) == NULL)
		return (NULL);
	if (n == 0)
		*str = '0';
	if (n < 0)
		*str = '-';
	while (n != 0)
	{
		nb_digit--;
		*(str + nb_digit) = (char)('0' + ABS((n % 10)));
		n = n / 10;
	}
	return (str);
}
