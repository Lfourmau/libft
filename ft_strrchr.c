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
