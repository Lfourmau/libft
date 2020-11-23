/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfourmau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 11:20:52 by lfourmau          #+#    #+#             */
/*   Updated: 2020/11/23 11:20:54 by lfourmau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

void *ft_memchr(void *str, int c, unsigned int n)
{
	char *string;
	int i;

	i = 0;
	string = str;
	while (*string && i < n)
	{
		if (*string == c)
		{
			str = string;
			return (str);
		}
		string++;
		i++;
	}
	return (NULL);
}
