

#ifndef LIBFT_H
# define LIBFT_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
size_t  ft_strlen(const char *p);
void    *ft_memset(void *ptr, int value, size_t num);
void    ft_bzero(void *s, size_t n);
void    *ft_memcpy ( void *destination, const void *source, size_t num );
size_t  ft_strlcat(char *dst, const char *src, size_t size);
void    *memmove(void *dest, const void *src, size_t n);
int     ft_toupper(int c);
int     ft_tolower(int c);
char    *ft_strchr(const char *s, int c);
char    *ft_strrchr(const char *s, int c);
int     ft_strncmp(const char *str1, const char *str2, size_t n);
void    *memchr( const void *memoryBlock, int searchedChar, size_t size );
int     ft_memcmp ( const void *ptr1, const void *ptr2, size_t num );
char    *strnstr(const char *big, const char *little, size_t len);
int     atoi(const char *str);
char    *ft_strdup(const char *s);
char    *ft_substr(char const *s, unsigned int start,size_t len);
char    *ft_strjoin(char const *s1, char const *s2);
char    *ft_strtrim(char const *s1, char const *set);
char    **ft_split(char const *s, char c);
char    *ft_itoa(int n);

#endif