void *ft_memchr(void *str, int c, unsigned int n)
{
	char *string;
	int i;

	i = 0;
	string = str;
	while (*string && i < n)
	{
		if (*string == c)
		{
			str = string;
			return (str);
		}
		string++;
		i++;
	}
	return (NULL);
}
