/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnoon <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 09:53:55 by vnoon             #+#    #+#             */
/*   Updated: 2015/12/09 15:55:14 by vnoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	begin;
	int		end;
	char	*str_trim;

	if (s == NULL)
		return (NULL);
	begin = 0;
	while (*(s + begin) == ' ' || *(s + begin) == '\t' || *(s + begin) == '\n')
		begin++;
	end = ft_strlen(s);
	while ((*(s + end - 1) == ' ' || *(s + end - 1) == '\t' ||
			*(s + end - 1) == '\n') && end > 0)
		end--;
	if (end == 0)
		begin = 0;
	str_trim = ft_strsub(s, begin, (end - begin));
	if (str_trim == NULL)
		return (NULL);
	return (str_trim);
}
