void ft_bzero(void *str, unsigned int n)
{
	int i;
	char *tab;

	i = 0;
	tab = str;
	while (i < n)
	{
		tab[i] = 0;
		i++;
	}
	str = tab;
}
