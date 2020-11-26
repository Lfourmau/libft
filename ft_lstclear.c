/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfourmau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 06:23:44 by lfourmau          #+#    #+#             */
/*   Updated: 2020/11/26 08:12:35 by lfourmau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
	if (lst != NULL)
	{
		t_list	*tosupp;
		t_list	*tmp;

		tosupp = *lst;
		while (tosupp->next != NULL)
		{
			tmp = tosupp;
			free(tosupp);
			(*del)(tmp->content);
			tosupp = tmp->next;
		}
	}
}
