/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfourmau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 11:21:18 by lfourmau          #+#    #+#             */
/*   Updated: 2020/11/26 02:11:00 by lfourmau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int ft_countwords(const char *str, char sep)
{
	int i;
	char *strcount;

	strcount = (char *)str;
	i = 0;
	while (*strcount)
	{
		while (*strcount &&*strcount == sep)
			strcount++;
		while (*strcount &&*strcount != sep)
			strcount++;
		i++;
	}
	return (i);
}

static char *ft_malloc_chain(char **chains, char *start, char const *str)
{
	char *ptr;

	ptr = malloc(str - start + 1);
	if (!ptr)
	{
		free(chains);
		return (NULL);
	}
	return (ptr);
}

char	**ft_split(char const *str, char sep)
{
	char	**chains;
	char	*start;
	int		i;

	i = 0;
	if (str == 0)
		return (0);
	if (!(chains = malloc(sizeof(char *) * (ft_countwords(str, sep) + 1))))
		return (NULL);
	while (*str)
	{
		while (*str && *str == sep)
			str++;
		start = (char *)str;
		while (*str && *str != sep)
			str++;
		if (!(chains[i] = ft_malloc_chain(chains, start, str)))
			return (NULL);
		ft_strlcpy(chains[i], start, str - start + 1);
		chains[i][str - start] = 0;
		if (start != str)
			i++;
	}
	chains[i] = 0;
	return (chains);
}
