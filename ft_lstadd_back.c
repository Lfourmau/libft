/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfourmau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 05:14:28 by lfourmau          #+#    #+#             */
/*   Updated: 2020/11/26 06:10:51 by lfourmau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **alst, t_list *new)
{
	if (!*alst)
		*alst = new;
	else
	{
	t_list *pnext;

	pnext = *alst;
	while (pnext->next != NULL)
		pnext = pnext->next;
	pnext->next = new;
	new->next = NULL;
	}
}
