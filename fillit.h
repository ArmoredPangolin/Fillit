/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnoon <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/13 18:40:03 by vnoon             #+#    #+#             */
/*   Updated: 2016/01/06 11:12:57 by vnoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# define READBUFFSIZE 21
# define BUFFSIZE_X 5
# define BUFFSIZE_Y 5
# define VALIDATION_FILE_PATH "./valid_input"

typedef	struct		s_dim
{
	int				x;
	int				y;
	int				l;
	int				h;
}					t_dim;

typedef	struct		s_tetro
{
	t_dim			dim;
	char			patern[4][4];
	struct	s_tetro	*next;
}					t_tetro;

int		do_colide(t_tetro *or, t_tetro *te);

#endif
