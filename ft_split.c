char **ft_split(char *str, char sep)
{
	char **chains;
	char *start;
	int lengthmax;
	int i;

	i = 0;
	lengthmax = ft_strlen(str) / 2 + 1;
	chains = malloc(sizeof(char *) * lengthmax);
	if (chains == NULL)
		return (NULL);
	while (*str)
	{
		while (*str && *str == sep)
			str++;
		start = str;
		while (*str && *str != sep)
			str++;
		chains[i] = malloc(str - start + 1);
		if (chains[i] == NULL)
			return (NULL);
		ft_strlcpy(chains[i], start, str - start + 1);
		chains[i][str - start] = 0;
		if (start != str)
			i++;
	}
	chains[i] = 0;
	return (chains);
}
