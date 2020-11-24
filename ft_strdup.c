/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfourmau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 11:21:42 by lfourmau          #+#    #+#             */
/*   Updated: 2020/11/24 15:49:39 by lfourmau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *str)
{
	int i;
	char *cpy;

	i = 0;
	cpy = malloc(ft_strlen(str));
	if (cpy == 0)
		return (NULL);
	while (str[i])
	{
		cpy[i] = str[i];
		i++;
	}
	free(cpy);
	return (cpy);
}
