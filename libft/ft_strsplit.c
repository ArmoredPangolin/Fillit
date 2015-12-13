/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vnoon <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 21:11:53 by vnoon             #+#    #+#             */
/*   Updated: 2015/12/09 15:56:52 by vnoon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static	void	ft_strsplit_addword(char **array, size_t index, char *s, char c)
{
	size_t	iter;

	iter = 0;
	while (s[iter] != c)
		iter++;
	array[index] = ft_strnew(iter);
	ft_strncpy(array[index], s, iter);
}

static	size_t	ft_strsplit_scan(char **array, char *s, char c)
{
	size_t	count;
	int		is_word;

	count = 0;
	is_word = 0;
	while (*s != '\0')
	{
		if (!is_word && *s != c)
		{
			is_word = 1;
			if (array)
			{
				ft_strsplit_addword(array, count, s, c);
			}
			count++;
		}
		else if (is_word && *s == c)
			is_word = 0;
		s++;
	}
	return (count);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**array;
	size_t	array_size;

	if (s == NULL)
		return (NULL);
	array_size = ft_strsplit_scan(NULL, (char *)s, c);
	array = malloc(array_size * sizeof(char *) + 1 * sizeof(char *));
	if (!array)
		return (NULL);
	array[array_size] = NULL;
	if (array_size != 0)
		ft_strsplit_scan(array, (char *)s, c);
	return (array);
}
