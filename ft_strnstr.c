/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfourmau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 11:22:53 by lfourmau          #+#    #+#             */
/*   Updated: 2020/11/23 11:22:54 by lfourmau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

char *ft_strnstr(char *haystack, char *needle, unsigned int size)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	if (needle[j] == 0)
		return (haystack);
	while (haystack[i])
	{
		while (haystack[i] && haystack[i] == needle[j] && i < size)
		{
			i++;
			j++;
		}
		if (needle[j] == 0)
			return (&haystack[i - j]); //needle trouvé en entier
		i++;
		j = 0;
	}
	return (0); //needle pas trouvé
}
