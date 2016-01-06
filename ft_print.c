/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnoon <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/06 15:50:34 by vnoon             #+#    #+#             */
/*   Updated: 2016/01/06 16:21:41 by vnoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include "libft/libft.h"
#include <stdlib.h>

int		ft_lst_scan(t_tetro *origin)
{
	int		nb_tetro;

	if (origin == NULL)
		return (0);
	nb_tetro = 1;
	while (origin->next != NULL)
	{
		origin->next = origin->next->next;
		++nb_tetro;
	}
	return (nb_tetro);
}

void	ft_fill_map(t_tetro *tetro, char **map, int num_tetro)
{
	int	h;
	int l;

	h = -1;
	while (++h < tetro->dim.h)
	{
		l = -1;
		while (++l < tetro->dim.l)
		{
			map[h + tetro->dim.y][l + tetro->dim.x] = (char) ('a' + num_tetro);
		}
	}
}

void	ft_print(t_tetro *sol, t_tetro *input, int square_size)
{
	char	map[square_size][square_size + 1];
	int		i;
	int		size_sol;

	size_sol = ft_lst_scan(sol);
	i = -1;
	while (++i < square_size)
	{
		ft_memset(map[i], '.', square_size - 1);
		map[i][square_size] = '\n';
	}
	i = -1;
	while (i < size_sol)
		ft_fill_map(sol, (char **)map, i);
	i = -1;
	while (++i < square_size)
		ft_putstr(map[i]);
	free(input);
	free(sol);
}
