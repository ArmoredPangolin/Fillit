/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnoon <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/06 10:38:49 by vnoon             #+#    #+#             */
/*   Updated: 2016/01/06 14:38:29 by vnoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include "libft/libft.h"

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

void	*ft_put_tetro(t_tetro *sol, t_tetro *tetro, int square_size)
{
	int		x;
	int		y;
	t_tetro	*tmp;

	if (tetro == NULL)
		ft_print_map(sol); //fonction affiche puis exit le programme
	y = -1;
	while ((++y + tetro->dim.h - 1) < square_size)
	{
		x = -1;
		while ((++x + tetro->dim.l - 1) < square_size)
		{
			tmp = tetro->next;
			tetro->dim.x = x;
			tetro->dim.y = y;
			if (!(do_colide(sol, tetro)))
			{
				tetro->next = NULL;
				ft_lstaddend(sol, tetro);
				ft_put_tetro(sol, tmp, square_size);
				ft_removeend_tetro(sol);
				tetro->next = tmp;
			}
		}
	}
}

void	ft_solve(t_tetro *sol, t_tetro *input, int *square_size)
{
	t_tetro	*input_cursor;

	input_cursor = input;
	while (input_cursor != NULL)
	{
		if (ft_put_tetro(sol, input_cursor, *square_size))
		{
			sol = input;
			input = NULL;
			ft_solve(sol->next, input_cursor->next, square_size);
			if (ft_lst_scan(input_cursor) != 1)
			{
				sol = NULL;
				input = input_cursor;
				input_cursor = input->next;
			}
		}
		else
			input_cursor = input->next;
	}
	if ((input != NULL) && (ft_lst_scan(sol) == 0))
	{
		*square_size = *square_size + 1;
		ft_solve(sol, input, square_size);
	}
}

