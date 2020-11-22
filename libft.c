//ATTENTION INCLUSIONS
#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

//PUTCHAR A ENLEVER
void ft_putchar(char c)
{
	write(1, &c, 1);
}
//PUTCHAR A ENLEVER

int ft_strlen(char *str)
{
	int i;
	i = 0;
	while(str[i])
		i++;
	return (i);
}

int ft_isspace(char c)
{
	if((c <= 13 && c >= 9) || c == ' ')
			return (1);
	return (0);
}


int ft_isdigit(char c)
{
	if (c <= '9' && c >= '0')
			return (1);
	return (0);
}

//semble marcher come vraie fonction mais verifier fort
int ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1); //car le carac est compris dans les unisgned chars ?
	return (0);
}

//adapter a la vraie fonction (comme a l'exam)
int ft_atoi(char *str)
{
	int i;
	int res;
	int sign;

	sign = 1;
	res = 0;
	i = 0;
	while (ft_isspace(str[i]))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		res = res * 10 + str[i] + 48;
		i++;
	}
	if (res)
		return (res);
	return (0);
}

int ft_isalpha(char c)
{
	if ((c <= 'z' && c >= 'a') || (c <= 'Z' && c >= 'A'))
		return (1);
	return (0);
}

int ft_isalnum(char c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}

//strlcpy a check fort (return ?)
char *ft_strlcpy(char *dest, char *src, int size)
{
	int i;
	i = 0;
	while (src[i] && i < size -1)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

char ft_toupper(char c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

char ft_tolower(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

int ft_isprint(int nbr)
{
	if ((nbr >= 0 && nbr <= 31) || nbr == 127)
		return (0);
	return (1);
}


//ft_strncmp > s1-s2 ou inverse ? 
int ft_strncmp(char *str1, char *str2, int n)
{
	int i;
	i = 0;
	while ((str1[i] && str2[i]) && i <= n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}

//semble marcher
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

//retester avec vraie fonction car retour différents sur certains cas (segfault) 
unsigned int ft_strlcat(char *dst, char *src, unsigned int dstsize)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	j = 0;
	while (dst[i] && i < dstsize)
		i++;
	while (src[j] && i + j + 1 < dstsize)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i != dstsize)
		dst[i + j] = 0;
	return (ft_strlen(src) + i);
}

//semble fonctionner
char *ft_strchr(char *str, int c)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (&str[i]);
		i++;
	}
	return (0);
}


//A VERIFIER : pb de mémoire ? malloc pour ptr ?
char *ft_strrchr(char *str, int c)
{
	char *ptr;
	int i;

	i = 0;
	ptr = 0;
	while (str[i])
	{
		if (str[i] == c)
			ptr = &str[i];
		i++;
	}
	if (ptr != 0)
		return (ptr);
	else
		return (0);
}

//semble marcher
char *ft_strdup(char *str)
{
	int i;
	char *cpy;

	i = 0;
	cpy = malloc(ft_strlen(str));
	if (cpy == 0)
		return (NULL);
	while (str[i])
	{
		cpy[i] = str[i];
		i++;
	}
	free(cpy);
	return (cpy);
}

//A revoir avec + de recherches pour etre sur
void *ft_calloc(unsigned int nbelements, unsigned int size)
{
//but de cette fonction : allouer la place pour nb elemnts de size octets
	void *ptr;

	ptr = malloc(size * nbelements);
	if (ptr == 0 || nbelements == 0 || size == 0)
		return (NULL);
	return (ptr);
}


//Vérifier si c'est bien ce qui est attendu
char *ft_strjoin(char *prefixe, char *suffixe)
{
	char *concat;
	int i;
	int j;
	int size;

	i = 0;
	j = 0;
	size = ft_strlen(prefixe) + ft_strlen(suffixe);
	concat = malloc(sizeof(char) * size);
	if (concat == 0)
		return (NULL);
	while (prefixe[i])
	{
		concat[j] = prefixe[i];
		i++;
		j++;
	}
	i = 0;
	while (suffixe[i])
	{
		concat[j] = suffixe[i];
		i++;
		j++;
	}
	concat[j] = 0;
	return (concat);
}

//semble marcher mais a restest bcp
char **ft_split(char *str, char sep)
{
	char **chains;
	char *start;
	int lengthmax;
	int i;

	i = 0;
	lengthmax = ft_strlen(str) / 2 + 1;
	chains = malloc(sizeof(char *) * lengthmax);
	if (chains == NULL)
		return (NULL);
	while (*str)
	{
		while (*str && *str == sep)
			str++;
		start = str;
		while (*str && *str != sep)
			str++;
		chains[i] = malloc(str - start + 1);
		if (chains[i] == NULL)
			return (NULL);
		ft_strlcpy(chains[i], start, str - start + 1);
		chains[i][str - start] = 0;
		if (start != str)
			i++;
	}
	chains[i] = 0;
	return (chains);
}

//ITOA//
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

char * ft_recursive_itoa(int nb, char *result, int index)
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
//ITOA//

//check toutes les fonctions memoire
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

//pas ce qui est demandé ? 
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

//MEMMOVE = pareil que memcpy mais avec buffer intermediaire ?


//memes retours
void *ft_memchr(void *str, int c, unsigned int n)
{
	char *string;
	int i;

	i = 0;
	string = str;
	while (*string && i < n)
	{
		if (*string == c)
		{
			str = string;
			return (str);
		}
		string++;
		i++;
	}
	return (NULL);
}

//memes retours
int ft_memcmp(void *str1, void *str2, unsigned int n)
{
	int i;
	char *string1;
	char *string2;

	i = 0;
	string1 = str1;
	string2 = str2;
	while (i < n - 1 && *string1 == *string2)
	{
		i++;
		string1++;
		string2++;
	}
	return (*string1 - *string2);
}

char *ft_substr(char const *s, unsigned int start, unsigned int len)
{
	int i;
	char *result;
	int nbcaracs;

	nbcaracs = len - start;
	if (nbcaracs < 0)
		nbcaracs *= -1;
	result = malloc(sizeof(char) * nbcaracs);
	i = 0;
	s+= start;
	while (*s && i < len)
	{
		result[i] = *s;
		i++;
		s++;
	}
	return (result);
}

int ft_same_char_strtrim(char *set, char c)
{
	int i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

//malloc a revoir (pas très propre)
char *ft_strtrim(char *str, char *set)
{
	char *start;
	char *cpy;

	cpy = malloc(ft_strlen(str));
	while (ft_same_char_strtrim(set, *str))
		str++;
	start = str;
	while (*str)
		str++;
	str--; //sinon dernier carac coupé
	while (ft_same_char_strtrim(set, *str))
		str--;
	str++; // -sinon dernier carac coupé
	ft_strlcpy(cpy, start, str - start + 1);
	return (cpy);
}

int main(int argc, char **argv)
{
	printf("%s\n", ft_strtrim(argv[1], argv[2]));

}

