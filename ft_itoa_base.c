/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfourmau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 13:07:20 by lfourmau          #+#    #+#             */
/*   Updated: 2020/12/21 13:13:05 by lfourmau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_count(size_t nb, char *base)
{
	int i;

	i = 0;
	if (nb < 0)
	{
		nb = -nb;
		i++;
	}
	while (nb >= ft_strlen(base))
	{
		nb /= ft_strlen(base);
		i++;
	}
	i++;
	return (i);
}

void	ft_recursive(size_t nb, char *str, char *base, int index)
{
	if (nb >= ft_strlen(base))
		ft_recursive(nb / ft_strlen(base), str, base, index - 1);
	str[index] = base[nb % ft_strlen(base)];
}

char	*ft_itoa_base(size_t nb, char *base)
{
	char	*str;
	int		index;

	index = ft_count(nb, base);
	str = malloc(sizeof(char) * (index + 1));
	if (nb < 0)
	{
		str[0] = '-';
		nb = -nb;
	}
	str[index] = 0;
	ft_recursive(nb, str, base, index - 1);
	return (str);
}
