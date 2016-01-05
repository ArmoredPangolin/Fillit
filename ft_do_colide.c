/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_colide.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnoon <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/14 16:40:18 by vnoon             #+#    #+#             */
/*   Updated: 2016/01/05 14:32:54 by vnoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include "libft/libft.h"

int	do_overlap(t_tetro *or, t_tetro *te)
{
	t_dim	coord;
	size_t	x;
	size_t	y;

	coord.x = MAX(or->dim.x, te->dim.x);
	coord.y = MAX(or->dim.y, te->dim.y);
	coord.l = MIN(or->dim.x + or->dim.l, te->dim.x + te->dim.l);
	coord.h = MIN(or->dim.y + or->dim.h, te->dim.y + te->dim.h);
	y = coord.y - 1;
	while (++y < coord.h)
	{
		x = coord.x - 1;
		while (++x < coord.l)
		{
			if ((te->patern[y - te->dim.y][x - te->dim.x] == '#') &&
				(or->patern[y - or->dim.y][x - or->dim.x] == '#'))
				return (1);
		}
	}
	return (0);
}

/*
** Fonction do_colide:
** Cette Fonction check si il y qa colision entre deux pieces, elle recois en
** parametres l'adresse du maillon contenant le dernier tetro place, et
** l'adresse du premier maillon de la chaine de reponse.
** return 0 si colision, sinon return 1.
*/

int	do_colide(t_tetro *or, t_tetro *te)
{
	while (or->next != NULL)
	{
		if ((!(or->dim.x > (te->dim.x + te->dim.l) ||
			or->dim.x + or->dim.l < te->dim.x))
			&& (!(or->dim.y > (te->dim.y + te->dim.h) ||
			or->dim.y + or->dim.h < te->dim.y)) && do_overlap(or, te))
			return (0);
		or = or->next;
	}
	return (1);
}
