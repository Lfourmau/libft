char *ft_strdup(char *str)
{
	int i;
	char *cpy;

	i = 0;
	cpy = malloc(ft_strlen(str));
	if (cpy == 0)
		return (NULL);
	while (str[i])
	{
		cpy[i] = str[i];
		i++;
	}
	free(cpy);
	return (cpy);
}
