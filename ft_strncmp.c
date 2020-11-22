int ft_strncmp(char *str1, char *str2, int n)
{
	int i;
	i = 0;
	while ((str1[i] && str2[i]) && i <= n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}

