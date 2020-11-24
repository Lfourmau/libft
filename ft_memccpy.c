/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfourmau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 11:20:41 by lfourmau          #+#    #+#             */
/*   Updated: 2020/11/24 15:41:53 by lfourmau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int ft_samechar_memccpy(char *str, int c, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (str[i] && i < n)
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

//memes valeurs de reoutr mais a revoir ++
void *ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t i;
	int j;
	char *source;
	char *dest;

	i = 0;
	j = 0;
	dest = dst;
	source = (char*)src;
	if (ft_samechar_memccpy(source, c, n) == 0)
		return (NULL);
	while (i <= n && *source != c)
	{
		*dest = *source;
		i++;
		dest++;
		source++;
	}
	dest++;
	dst = dest;
	return (dst);

}
