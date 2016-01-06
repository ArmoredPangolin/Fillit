/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_input.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnoon <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/13 17:35:49 by vnoon             #+#    #+#             */
/*   Updated: 2016/01/06 10:37:40 by vnoon            ###   ########.fr       */
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

void	ft_organise_patern(t_tetro *te)
{
	int		cn;
	int		ln;
	int		i;

	i = -1;
	ln = 0;
	while (++i < 4)
	{
		if (ft_strchr(te->patern[i], '#') == NULL)
			++ln;
		else
			break ;
	}
	ft_memmove(te->patern[0], te->patern[ln], sizeof(char **) * (4 - ln));
	i = -1;
	while (++i < 16)
	{
		if (!(((i / 4) < 4) && (te->patern[(i / 4)][(i % 4)] == '.')))
			break ;
	}
	cn = (i / 4);
	i = -1;
	while (++i > 0)
		ft_memmove(te->patern[i], te->patern[i] + cn, sizeof(char) * (4 - cn));
}

int		ft_count_near_pieces(t_tetro tetro, t_dim dim)
{
	int		near_blocks;

	near_blocks = (((dim.y > 0) && (tetro.patern[dim.x][dim.y - 1] != '#')) +
					((dim.y < 3) && (tetro.patern[dim.x][dim.y + 1] != '#')) +
					((dim.x > 0) && (tetro.patern[dim.x - 1][dim.y] != '#')) +
					((dim.x < 3) && (tetro.patern[dim.x + 1][dim.y] != '#')));
	if (near_blocks > 3)
		return (-20);
	if (near_blocks == 0)
		return (-20);
	return (near_blocks);
}

int		is_valid(t_tetro tetro)
{
	t_dim	dim;
	int		nb_dieze;
	int		nb_conect;

	ft_init_dim(&dim);
	nb_dieze = 0;
	nb_conect = 0;
	while (dim.x < 4)
	{
		while (dim.y < 4)
		{
			if (tetro.patern[dim.x][dim.y] == '#')
			{
				++nb_dieze;
				if ((nb_conect += ft_count_near_pieces(tetro, dim)) <= 0)
					return (0);
			}
			++dim.y;
		}
		++dim.x;
	}
	if ((nb_dieze != 4) || ((nb_conect != 6) && (nb_conect != 8)))
		return (0);
	return (1);
}
