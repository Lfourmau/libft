/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfourmau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 11:22:53 by lfourmau          #+#    #+#             */
/*   Updated: 2020/11/27 11:19:19 by lfourmau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t size)
{
	size_t i;
	size_t j;

	i = 0;
	j = 0;
	if (needle[j] == 0)
		return ((char *)haystack);
	while (haystack[i])
	{
		while (haystack[i] && needle[j]  && haystack[i] == needle[j] && i < size)
		{
			i++;
			j++;
		}
		if (needle[j] == 0)
			return ((char *)&haystack[i - j]);
		i++;
		j = 0;
	}
	return (0);
}
