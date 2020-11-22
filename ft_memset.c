void *ft_memset(void *memzone, int octet, unsigned int len)
{
	int i;
	char *tab;

	i = 0;
	tab = memzone;
	while (i < len)
	{
		tab[i] = octet;
		i++;
	}
	memzone = tab;
	return (memzone);
}
