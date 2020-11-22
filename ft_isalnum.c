int ft_isalnum(char c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}

