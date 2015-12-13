/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_input.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnoon <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/13 17:35:49 by vnoon             #+#    #+#             */
/*   Updated: 2015/12/13 19:37:52 by vnoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include "fillit.h"
#include <unistd.h>
#include <fcntl.h>

void	ft_init_dim(t_dim *dim)
{
	dim->x = 0;
	dim->y = 0;
	dim->l = 0;
	dim->h = 0;
}

int		is_valid(t_tetro tetro)
{
	t_dim	dim;
	int		nb_dieze;

	ft_init_dim(&dim);
	nb_dieze = 0;
	while (dim.x < 4)
	{
		while (dim.y < 4)
		{
			if (tetro.patern[dim.x][dim.y] == '#')
			{
				++nb_dieze;
				if (tetro.patern[dim.x - 1][dim.y - 1] != '#' &&
					tetro.patern[dim.x - 1][dim.y + 1] != '#' &&
					tetro.patern[dim.x + 1][dim.y - 1] != '#' &&
					tetro.patern[dim.x + 1][dim.y + 1] != '#')
					return (0);
			}
			++dim.y;
		}
		++dim.x;
	}
	if (nb_dieze != 4)
		return (0);
	return (1);
}
