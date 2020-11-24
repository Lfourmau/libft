/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfourmau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 11:22:19 by lfourmau          #+#    #+#             */
/*   Updated: 2020/11/24 15:51:03 by lfourmau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t i;
	i = 0;
	while (src[i] && i < size -1)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
