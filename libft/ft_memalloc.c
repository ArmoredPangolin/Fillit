/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnoon <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 18:13:49 by vnoon             #+#    #+#             */
/*   Updated: 2015/11/28 12:27:22 by vnoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdlib.h"

void	*ft_memalloc(size_t size)
{
	void	*mem_space;

	if ((mem_space = (void *)malloc(size)) != NULL)
	{
		ft_bzero(mem_space, size);
		return (mem_space);
	}
	else
		return (NULL);
}
