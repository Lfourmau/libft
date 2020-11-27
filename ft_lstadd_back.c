/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfourmau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 05:14:28 by lfourmau          #+#    #+#             */
/*   Updated: 2020/11/27 10:19:14 by lfourmau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list *pnext;

	if (!*alst)
		*alst = new;
	else
	{
		pnext = *alst;
		while (pnext->next != NULL)
			pnext = pnext->next;
		pnext->next = new;
		new->next = NULL;
	}
}
