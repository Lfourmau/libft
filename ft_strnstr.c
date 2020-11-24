/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfourmau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 11:22:53 by lfourmau          #+#    #+#             */
/*   Updated: 2020/11/24 15:54:57 by lfourmau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t size)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	if (needle[j] == 0)
		return ((char *)haystack);//pas cast
	while (haystack[i])
	{
		while (haystack[i] && haystack[i] == needle[j] && i < size)
		{
			i++;
			j++;
		}
		if (needle[j] == 0)
			return ((char *)&haystack[i - j]); //pas cast avant mkfile
		i++;
		j = 0;
	}
	return (0); //needle pas trouvé
}
