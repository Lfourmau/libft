/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfourmau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 11:21:51 by lfourmau          #+#    #+#             */
/*   Updated: 2020/11/23 11:21:55 by lfourmau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

//Vérifier si c'est bien ce qui est attendu
char *ft_strjoin(char *prefixe, char *suffixe)
{
	char *concat;
	int i;
	int j;
	int size;

	i = 0;
	j = 0;
	size = ft_strlen(prefixe) + ft_strlen(suffixe);
	concat = malloc(sizeof(char) * size);
	if (concat == 0)
		return (NULL);
	while (prefixe[i])
	{
		concat[j] = prefixe[i];
		i++;
		j++;
	}
	i = 0;
	while (suffixe[i])
	{
		concat[j] = suffixe[i];
		i++;
		j++;
	}
	concat[j] = 0;
	return (concat);
}

