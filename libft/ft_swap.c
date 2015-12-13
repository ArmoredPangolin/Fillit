/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnoon <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 18:17:34 by vnoon             #+#    #+#             */
/*   Updated: 2015/11/29 19:21:06 by vnoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_swap(void *s1, void *s2, size_t size)
{
	char	tempo;
	char	*s1_printer;
	char	*s2_printer;

	s2_printer = s2;
	s1_printer = s1;
	while (size-- > 0)
	{
		tempo = *s1_printer;
		*s1_printer = *s2_printer;
		*s2_printer = tempo;
		s1_printer++;
		s2_printer++;
	}
}
