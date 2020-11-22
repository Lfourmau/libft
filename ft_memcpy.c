void *ft_memcpy(void *dst, void *src, unsigned int n)
{
	int i;
	char *dest;
	char *source;

	dest = dst;
	source = src;
	i = 0;
	while (i < n)
	{
		dest[i] = source[i];
		i++;
	}
	dst = dest;
	return (dst);
}
