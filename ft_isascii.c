int ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1); //car le carac est compris dans les unisgned chars ?
	return (0);
}
