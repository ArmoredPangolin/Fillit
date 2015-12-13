/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnoon <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/30 11:21:43 by vnoon             #+#    #+#             */
/*   Updated: 2015/11/30 11:41:35 by vnoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa_base(int n, size_t base)
{
	char	*str;
	int		nb_digit;
	int		mem_n;

	if (n < 0)
		nb_digit = 2;
	else
		nb_digit = 1;
	mem_n = n;
	while ((mem_n /= base) != 0)
		nb_digit++;
	if (((base == 10) || n >= 0) && (str = ft_strnew(nb_digit)) == NULL)
		return (NULL);
	if (n == 0)
		*str = '0';
	if (n < 0)
		*str = '-';
	while (n != 0)
	{
		nb_digit--;
		*(str + nb_digit) = (char)(BASE_SYMB((n % base)) + ABS((n % base)));
		n = n / base;
	}
	return (str);
}
