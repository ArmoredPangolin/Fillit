/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnoon <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 09:36:28 by vnoon             #+#    #+#             */
/*   Updated: 2015/12/09 15:56:25 by vnoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join_str;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	join_str = ft_strnew(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (join_str == NULL)
		return (NULL);
	ft_strcpy(join_str, s1);
	ft_strcpy((join_str + ft_strlen(s1)), s2);
	return (join_str);
}
