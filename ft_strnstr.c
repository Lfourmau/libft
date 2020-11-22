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
