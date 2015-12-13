/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnoon <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 18:29:59 by vnoon             #+#    #+#             */
/*   Updated: 2015/11/28 12:33:25 by vnoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdlib.h"

char	*ft_strnew(size_t size)
{
	char	*mem_space;

	if ((mem_space = (char *)malloc(size + 1)) != NULL)
	{
		ft_memset(mem_space, '\0', size + 1);
		return (mem_space);
	}
	else
		return (NULL);
}
