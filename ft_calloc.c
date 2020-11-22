void *ft_calloc(unsigned int nbelements, unsigned int size)
{
//but de cette fonction : allouer la place pour nb elemnts de size octets
	void *ptr;

	ptr = malloc(size * nbelements);
	if (ptr == 0 || nbelements == 0 || size == 0)
		return (NULL);
	return (ptr);
}
