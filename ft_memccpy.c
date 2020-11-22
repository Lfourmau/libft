int ft_samechar_memccpy(char *str, int c, unsigned int n)
{
	int i;

	i = 0;
	while (str[i] && i < n)
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

//memes valeurs de reoutr mais a revoir ++
void *ft_memccpy(void *dst, void *src, int c, unsigned int n)
{
	int i;
	int j;
	char *source;
	char *dest;

	i = 0;
	j = 0;
	dest = dst;
	source = src;
	if (ft_samechar_memccpy(source, c, n) == 0)
		return (NULL);
	while (i <= n && *source != c)
	{
		*dest = *source;
		i++;
		dest++;
		source++;
	}
	dest++;
	dst = dest;
	return (dst);

}
