/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfourmau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 11:20:52 by lfourmau          #+#    #+#             */
/*   Updated: 2020/11/24 15:44:10 by lfourmau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memchr(const void *str, int c, size_t n)
{
	char *string;
	size_t i;

	i = 0;
	string = (char*)str;
	while (*string && i < n)
	{
		if (*string == c)
		{
			str = string;
			return (string); //avant mkfl --> return (str)
		}
		string++;
		i++;
	}
	return (NULL);
}
