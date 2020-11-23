/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfourmau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 13:50:40 by lfourmau          #+#    #+#             */
/*   Updated: 2020/11/23 14:16:48 by lfourmau         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int i;
	char *tab;
	f = &f;

	tab = malloc(ft_strlen(s) * sizeof(char));
	if (tab == NULL)
		return (NULL);
	while (s[i])
	{
		tab[i] = (*f)(s[i]); //quel arg donner pour le unsigned int du prototype ?
		i++;
	}
	return (tab);
}
