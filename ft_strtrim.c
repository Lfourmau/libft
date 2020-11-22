int ft_same_char_strtrim(char *set, char c)
{
	int i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

//malloc a revoir (pas très propre)
char *ft_strtrim(char *str, char *set)
{
	char *start;
	char *cpy;

	cpy = malloc(ft_strlen(str));
	while (ft_same_char_strtrim(set, *str))
		str++;
	start = str;
	while (*str)
		str++;
	str--; //sinon dernier carac coupé
	while (ft_same_char_strtrim(set, *str))
		str--;
	str++; // -sinon dernier carac coupé
	ft_strlcpy(cpy, start, str - start + 1);
	return (cpy);
}

