/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfourmau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 11:22:05 by lfourmau          #+#    #+#             */
/*   Updated: 2020/11/23 11:22:06 by lfourmau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

unsigned int ft_strlcat(char *dst, char *src, unsigned int dstsize)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	while (dst[i] && i < dstsize)
		i++;
	while (src[j] && i + j + 1 < dstsize)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i != dstsize)
		dst[i + j] = 0;
	return (ft_strlen(src) + i);
}
