/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfourmau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 11:17:22 by lfourmau          #+#    #+#             */
/*   Updated: 2020/11/24 14:23:27 by lfourmau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t nbelements, size_t size)
{
	void *ptr;

	ptr = malloc(size * nbelements);
	if (ptr == 0 || nbelements == 0 || size == 0)
		return (NULL);
	ft_bzero(ptr, size);
	return (ptr);
}
