/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfourmau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 11:16:57 by lfourmau          #+#    #+#             */
/*   Updated: 2020/11/23 11:17:03 by lfourmau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int ft_isspace(char c)
{
	if((c <= 13 && c >= 9) || c == ' ')
			return (1);
	return (0);
}

//adapter a la vraie fonction (comme a l'exam)
int ft_atoi(char *str)
{
	int i;
	int res;
	int sign;

	sign = 1;
	res = 0;
	i = 0;
	while (ft_isspace(str[i]))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		res = res * 10 + str[i] + 48;
		i++;
	}
	if (res)
		return (res);
	return (0);
}

