/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfourmau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 13:06:24 by lfourmau          #+#    #+#             */
/*   Updated: 2020/12/21 13:10:47 by lfourmau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_error(char *str)
{
	int i;
	int j;

	i = 0;
	if (ft_strlen(str) == 0 || ft_strlen(str) == 1)
		return (1);
	while (str[i])
	{
		j = i + 1;
		while (str[i] != str[j] && str[j])
			j++;
		if (str[i] == str[j])
			return (1);
		i++;
	}
	i = 0;
	while (str[i])
	{
		if (str[i] == '+' || str[i] == '-' || (str[i] >= 9 && str[i] <= 13)
				|| str[i] == ' ')
			return (1);
		i++;
	}
	return (0);
}

char			*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		first_conv;
	char	*res;

	if (ft_error(base_from) || ft_error(base_to))
		return (NULL);
	first_conv = ft_atoi_base(nbr, base_from);
	res = ft_itoa_base(first_conv, base_to);
	return (res);
}
