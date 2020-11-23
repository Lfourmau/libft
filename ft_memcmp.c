/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfourmau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 11:21:04 by lfourmau          #+#    #+#             */
/*   Updated: 2020/11/23 11:21:05 by lfourmau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int ft_memcmp(void *str1, void *str2, unsigned int n)
{
	int i;
	char *string1;
	char *string2;

	i = 0;
	string1 = str1;
	string2 = str2;
	while (i < n - 1 && *string1 == *string2)
	{
		i++;
		string1++;
		string2++;
	}
	return (*string1 - *string2);
}
