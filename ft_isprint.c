int ft_isprint(int nbr)
{
	if ((nbr >= 0 && nbr <= 31) || nbr == 127)
		return (0);
	return (1);
}
