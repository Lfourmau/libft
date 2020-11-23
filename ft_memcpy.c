/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfourmau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 11:20:28 by lfourmau          #+#    #+#             */
/*   Updated: 2020/11/23 11:20:30 by lfourmau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void *ft_memcpy(void *dst, void *src, unsigned int n)
{
	int i;
	char *dest;
	char *source;

	dest = dst;
	source = src;
	i = 0;
	while (i < n)
	{
		dest[i] = source[i];
		i++;
	}
	dst = dest;
	return (dst);
}
