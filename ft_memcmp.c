/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfourmau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 11:21:04 by lfourmau          #+#    #+#             */
/*   Updated: 2020/11/24 15:45:02 by lfourmau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t i;
	char *string1;
	char *string2;

	i = 0;
	string1 = (char*)str1;
	string2 = (char*)str2;
	while (i < n - 1 && *string1 == *string2)
	{
		i++;
		string1++;
		string2++;
	}
	return (*string1 - *string2);
}
