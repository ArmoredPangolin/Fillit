/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnoon <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 09:22:01 by vnoon             #+#    #+#             */
/*   Updated: 2015/12/09 15:54:40 by vnoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*sub_str;

	if (s == NULL)
		return (NULL);
	sub_str = ft_strnew(len);
	if (sub_str == NULL)
		return (NULL);
	ft_strncpy(sub_str, (s + start), len);
	return (sub_str);
}
