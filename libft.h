#ifndef LIBFT_H_
#define LIBFT_H_

#include <unistd.h>
#include <stdlib.h>
#include <string.h>

void ft_putnbr_fd(int n, int fd);
void ft_putstr_fd(char *s, int fd);
char **ft_split(char const *str, char sep);
char *ft_strchr(const char *str, int c);
char *ft_strdup(const char *str);
char *ft_strjoin(char const *prefixe, char const *suffixe);
unsigned int ft_strlcat(char *dst, const char *src, size_t dstsize);
char *ft_strlcpy(char *dest, const char *src, size_t size);
size_t ft_strlen(const char *str);
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
int ft_strncmp(const char *str1, const char *str2, size_t n);
char *ft_strnstr(const char *haystack, const char *needle, size_t size);
char *ft_strrchr(const char *str, int c);
char *ft_strtrim(char const *str, char const *set);
char *ft_substr(char const *s, unsigned int start, size_t len);
int ft_tolower(int c);
int ft_toupper(int c);
int ft_atoi(const char *str);
void ft_bzero(void *str, size_t n);
void *ft_calloc(size_t nbelements, size_t size);
int ft_isalnum(int c);
int ft_isalpha(int c);
int ft_isascii(int c);
int ft_isdigit(int c);
int ft_isprint(int nbr);
char *ft_itoa(int nb);
void *ft_memccpy(void *dst, const void *src, int c, size_t n);
void *ft_memchr(const void *str, int c, size_t n);
int ft_memcmp(const void *str1, const void *str2, size_t n);
void *ft_memcpy(void *dst, const void *src, size_t  n);
void *ft_memmove(void *dst, const void *src, size_t len);
void *ft_memset(void *memzone, int octet, size_t len);
void ft_putchar_fd(char c, int fd);
void ft_putendl_fd(char *s, int fd);
#endif
