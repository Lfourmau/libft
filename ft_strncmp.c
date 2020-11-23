/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfourmau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 11:22:43 by lfourmau          #+#    #+#             */
/*   Updated: 2020/11/23 11:22:45 by lfourmau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int ft_strncmp(char *str1, char *str2, int n)
{
	int i;
	i = 0;
	while ((str1[i] && str2[i]) && i <= n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}

