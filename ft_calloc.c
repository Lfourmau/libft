/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfourmau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 11:17:22 by lfourmau          #+#    #+#             */
/*   Updated: 2020/11/23 11:17:25 by lfourmau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void *ft_calloc(unsigned int nbelements, unsigned int size)
{
//but de cette fonction : allouer la place pour nb elemnts de size octets
	void *ptr;

	ptr = malloc(size * nbelements);
	if (ptr == 0 || nbelements == 0 || size == 0)
		return (NULL);
	return (ptr);
}
