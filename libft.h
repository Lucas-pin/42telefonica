/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpin <lpin@student.42.malaga.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 12:10:50 by lpin              #+#    #+#             */
/*   Updated: 2023/09/26 16:58:28 by lpin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H   
# include <stdio.h>
# include <ctype.h>
# include <string.h>
# include <stdlib.h>

int		ft_isalpha(int c);
/*
//@brief Checks for an alphabetic character; in the standard "C" locale, 
it is equivalent to (isupper(c) || islower(c)). In some locales, 
there may be additional characters for which isalpha() is true—letters 
which are neither uppercase nor lowercase.
//@param c The character to be checked.
//@return The value returned is nonzero if the character c falls into the 
tested class, and zero if not.
*/

int		ft_isdigit(int c);
/*
//@brief Checks for a digit (0 through 9).
//@param c The character to be checked.
//@return The value returned is nonzero if the character c falls into 
the tested class, and zero if not.
*/

int		ft_isalnum(int c);
/*
//@brief Checks for an alphanumeric character; it is equivalent 
to (isalpha(c) || isdigit(c)).
//@param c The character to be checked.
//@return The value returned is nonzero if the character c falls 
into the tested class, and zero if not.
*/

int		ft_isascii(int c);
/*
//@brief Checks whether c is a 7-bit unsigned char value 
that fits into the ASCII character set.
//@param c The character to be checked.
//@return The value returned is nonzero if the character c 
falls into the tested class, and zero if not.
*/

int		ft_isprint(int c);
/*
//@brief Checks for any printable character including space.
//@param c The character to be checked.
//@return The value returned is nonzero if the character c falls 
into the tested class, and zero if not.
*/

size_t	ft_strlen(const char *s);
/*
//@brief Computes the length of the string s.
//@param s The pointer to the string to be measured.
//@return The length of the string.
*/

void	*ft_memset(void *s, int c, size_t n);
/*
//@brief Writes len bytes of value c (converted to an unsigned char) 
to the string b.
//@param s The pointer to the string to be filled.
//@param c The character to fill the string with.
//@param n The number of bytes to be filled.
//@return The pointer to the string.
*/

void	*ft_memcpy(void *dst, const void *src, size_t n);
/*
//@brief Copies n bytes from memory area src to memory area dst. 
If dst and src overlap, behavior is undefined. Applications in 
which dst and src might overlap should use memmove(3) instead.
//@param dst The pointer to the destination string.
//@param src The pointer to the source string.
//@param n The number of bytes to be copied.
//@return The pointer to the destination string.
*/

void	ft_bzero(void *s, size_t n);
/*
//@brief Writes n zeroed bytes to the string s. If n is zero, 
bzero() does nothing.
//@param s The pointer to the string to be zeroed.
//@param n The number of bytes to be zeroed.
//@return None.
*/

void	*ft_memmove(void *dst, const void *src, size_t len);
/*
//@brief Copies len bytes from string src to string dst. 
The two strings may overlap; the copy is always done in a non-destructive manner
//@param dst The pointer to the destination string.
//@param src The pointer to the source string.
//@param len The number of bytes to be copied.
//@return The pointer to the destination string.
*/

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
/*
//@brief Copies up to size - 1 characters from the NUL-terminated 
string src to dst, NUL-terminating the result.
//@param dst The pointer to the destination string.
//@param src The pointer to the source string.
//@param dstsize The size of the destination string.
//@return The length of the string src.
*/

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
/*
//@brief Appends the NUL-terminated string src to the end of dst. 
It will append at most size - strlen(dst) - 1 bytes, NUL-terminating the result.
//@param dst The pointer to the destination string.
//@param src The pointer to the source string.
//@param dstsize The size of the destination string.
//@return The length of the string src.
*/

int		ft_toupper(int c);
/*
//@brief Converts a lower-case letter to the corresponding upper-case letter.
//@param c The character to be converted.
//@return The converted character.
*/

int		ft_tolower(int c);
/*
//@brief Converts an upper-case letter to the corresponding lower-case letter.
//@param c The character to be converted.
//@return The converted character.
*/

char	*ft_strchr(const char *s, int c);
/*
//@brief Locates the first occurrence of c (converted to a char)
in the string pointed to by s. The terminating null character is considered
to be part of the string; therefore if c is `\0', the functions locate the
terminating `\0'.
//@param s The pointer to the string to be searched.
//@param c The character to be searched.
//@return The pointer to the located character, 
or NULL if the character does not appear in the string.
*/

char	*ft_strrchr(const char *s, int c);
/*
//@brief Locates the last occurrence of c (converted to a char)
in the string pointed to by s. The terminating null character is considered
to be part of the string; therefore if c is `\0', the functions locate the
terminating `\0'.
//@param s The pointer to the string to be searched.
//@param c The character to be searched.
//@return The pointer to the located character,
or NULL if the character does not appear in the string.
*/

int		ft_strncmp(const char *s1, const char *s2, size_t n);
/*
//@brief Compares the two strings s1 and s2. It returns an integer less than,
equal to, or greater than zero if s1 is found, respectively, to be less than,
to match, or be greater than s2.
//@param s1 The pointer to the first string to be compared.
//@param s2 The pointer to the second string to be compared.
//@param n The maximum number of characters to be compared.
//@return The difference between the first two differing characters
(when interpreted as unsigned char values, they are compared).
*/

char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
/*
//@brief Locates the first occurrence of the null-terminated string needle
in the string haystack, where not more than len characters are searched.
Characters that appear after a `\0' character are not searched.
//@param haystack The pointer to the string to be searched.
//@param needle The pointer to the string to be searched for.
//@param len The maximum number of characters to be searched.
//@return The pointer to the located character,
or NULL if the character does not appear in the string.
*/

char	*ft_memchr(const void *s, int c, size_t n);
/*
//@brief Locates the first occurrence of c (converted to an unsigned char)
in string s.
//@param s The pointer to the string to be searched.
//@param c The character to be searched.
//@param n The maximum number of characters to be searched.
//@return The pointer to the located character,
or NULL if the character does not appear in the string.
*/

int		ft_memcmp(const void *s1, const void *s2, size_t n);
/*
//@brief Compares byte string s1 against byte string s2. Both strings are
assumed to be n bytes long.
//@param s1 The pointer to the first string to be compared.
//@param s2 The pointer to the second string to be compared.
//@param n The maximum number of characters to be compared.
//@return The difference between the first two differing characters
(when interpreted as unsigned char values, they are compared).
*/

int		ft_atoi(const char *str);
/*
//@brief Converts the initial portion of the string pointed to by str to int.
//@param str The pointer to the string to be converted.
//@return The converted value.
*/

void	*ft_calloc(size_t count, size_t size);
/*
//@brief Allocates memory for an array of count elements of size bytes each
and returns a pointer to the allocated memory. The memory is set to zero.
If count or size is 0, then calloc() returns either NULL, or a unique pointer
value that can later be successfully passed to free().
//@param count The number of elements to be allocated.
//@param size The size of elements to be allocated.
//@return The pointer to the allocated memory.
*/

char	*ft_strdup(const char *s1);
/*
//@brief Allocates sufficient memory for a copy of the string s1, does the copy,
and returns a pointer to it. The pointer may subsequently be used as an argument
to the function free(3). If insufficient memory is available, NULL is returned
and errno is set to ENOMEM.
//@param s1 The pointer to the string to be copied.
//@return The pointer to the allocated memory.
*/

char	*ft_substr(char const *s, unsigned int start, size_t len);
/*
//@brief Allocates (with malloc(3)) and returns a substring from the string s.
The substring begins at index start and is of maximum size len.
//@param s The pointer to the string to be copied.
//@param start The start index of the substring.
//@param len The maximum size of the substring.
//@return The pointer to the allocated memory.
*/

char	*ft_strjoin(char const *s1, char const *s2);
/*
//@brief Allocates (with malloc(3)) and returns a new string, which is the result
of the concatenation of s1 and s2.
//@param s1 The pointer to the first string to be concatenated.
//@param s2 The pointer to the second string to be concatenated.
//@return The pointer to the allocated memory.
*/

#endif