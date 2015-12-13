/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnoon <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 14:52:43 by vnoon             #+#    #+#             */
/*   Updated: 2015/11/27 15:57:55 by vnoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new_lst;
	t_list	*f_result;

	f_result = f(lst);
	new_lst = ft_lstnew((*f_result).content, (*f_result).content_size);
	if ((*lst).next != NULL)
		(*new_lst).next = ft_lstmap((*lst).next, f);
	else
		(*new_lst).next = NULL;
	return (new_lst);
}
