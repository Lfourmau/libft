/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfourmau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 11:21:18 by lfourmau          #+#    #+#             */
/*   Updated: 2020/11/25 15:31:33 by lfourmau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char **ft_split(char const *str, char sep)
{
	char **chains;
	char *start;
	int lengthmax;
	int i;

	i = 0;
	if (str == 0)
		return (0);
	lengthmax = ft_strlen(str) / 2 + 1;
	chains = malloc(sizeof(char *) * lengthmax);
	if (chains == NULL)
		return (NULL);
	while (*str)
	{
		while (*str && *str == sep)
			str++;
		start = (char *)str;
		while (*str && *str != sep)
			str++;
		chains[i] = malloc(str - start + 1);
		if (chains[i] == NULL)
			return (NULL);
		ft_strlcpy(chains[i], start, str - start + 1);
		chains[i][str - start] = 0;
		if (start != str)
			i++;
	}
	chains[i] = 0;
	return (chains);
}
