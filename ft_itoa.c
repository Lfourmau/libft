int ft_nbdigits_itoa(int n)
{
	int i;

	i = 0;
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	while (n >= 10)
	{
		n /= 10;
		i++;
	}
	i++;
	return (i);
}

char *ft_recursive_itoa(int nb, char *result, int index)
{
	if (nb >= 10)
		ft_recursive_itoa(nb / 10, result,  index - 1);
	result[index - 1] = (nb % 10 + 48);
	return (result);
}

char *ft_itoa(int nb)
{
	char *result;
	int index;

	index = ft_nbdigits_itoa(nb);
	result = malloc(sizeof(char) * ft_nbdigits_itoa(nb));
	if (result == NULL)
		return (NULL);
	if (nb < 0)
	{
		result[0] = '-';
		nb *= -1;
	}
	ft_recursive_itoa(nb, result, index);
	return (result);
}
