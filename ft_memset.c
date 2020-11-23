/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfourmau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 11:17:45 by lfourmau          #+#    #+#             */
/*   Updated: 2020/11/23 11:18:40 by lfourmau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void *ft_memset(void *memzone, int octet, unsigned int len)
{
	int i;
	char *tab;

	i = 0;
	tab = memzone;
	while (i < len)
	{
		tab[i] = octet;
		i++;
	}
	memzone = tab;
	return (memzone);
}
