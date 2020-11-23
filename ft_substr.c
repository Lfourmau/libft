/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfourmau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 11:23:38 by lfourmau          #+#    #+#             */
/*   Updated: 2020/11/23 11:23:40 by lfourmau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

char *ft_substr(char const *s, unsigned int start, unsigned int len)
{
	int i;
	char *result;
	int nbcaracs;

	nbcaracs = len - start;
	if (nbcaracs < 0)
		nbcaracs *= -1;
	result = malloc(sizeof(char) * nbcaracs);
	i = 0;
	s+= start;
	while (*s && i < len)
	{
		result[i] = *s;
		i++;
		s++;
	}
	return (result);
}
