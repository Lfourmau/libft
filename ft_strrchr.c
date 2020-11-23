/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfourmau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 11:23:05 by lfourmau          #+#    #+#             */
/*   Updated: 2020/11/23 11:23:07 by lfourmau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

char *ft_strrchr(char *str, int c)
{
	char *ptr;
	int i;

	i = 0;
	ptr = 0;
	while (str[i])
	{
		if (str[i] == c)
			ptr = &str[i];
		i++;
	}
	if (ptr != 0)
		return (ptr);
	else
		return (0);
}
