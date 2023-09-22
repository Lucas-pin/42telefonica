/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpin < lpin@student.42malaga.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 12:10:50 by lpin              #+#    #+#             */
/*   Updated: 2023/09/22 12:40:18 by lpin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef libft.h
# define libft.h
# include <stdio.h>

int     ft_isalpha(int c);
/*
//@brief Checks for an alphabetic character; in the standard "C" locale, it is equivalent to (isupper(c) || islower(c)). In some locales, there may be additional characters for which isalpha() is true—letters which are neither uppercase nor lowercase.
//@param c The character to be checked.
//@return The value returned is nonzero if the character c falls into the tested class, and zero if not.
*/

int     ft_isdigit(int c);
/*
//@brief Checks for a digit (0 through 9).
//@param c The character to be checked.
//@return The value returned is nonzero if the character c falls into the tested class, and zero if not.
*/

int     ft_isalnum(int c);
/*
//@brief Checks for an alphanumeric character; it is equivalent to (isalpha(c) || isdigit(c)).
//@param c The character to be checked.
//@return The value returned is nonzero if the character c falls into the tested class, and zero if not.
*/

int     ft_isascii(int c);
/*
//@brief Checks whether c is a 7-bit unsigned char value that fits into the ASCII character set.
//@param c The character to be checked.
//@return The value returned is nonzero if the character c falls into the tested class, and zero if not.
*/

int     ft_isprint(int c);
/*
//@brief Checks for any printable character including space.
//@param c The character to be checked.
//@return The value returned is nonzero if the character c falls into the tested class, and zero if not.
*/

size_t  ft_strlen(const char *s);
/*
//@brief Computes the length of the string s.
//@param s The pointer to the string to be measured.
//@return The length of the string.
*/

void    *ft_memset(void *s, int c, size_t n);
/*
//@brief Writes len bytes of value c (converted to an unsigned char) to the string b.
//@param s The pointer to the string to be filled.
//@param c The character to fill the string with.
//@param n The number of bytes to be filled.
//@return The pointer to the string.
*/

void    ft_memcpy(void *dst, const void *src, size_t n);
/*
//@brief Copies n bytes from memory area src to memory area dst. If dst and src overlap, behavior is undefined. Applications in which dst and src might overlap should use memmove(3) instead.
//@param dst The pointer to the destination string.
//@param src The pointer to the source string.
//@param n The number of bytes to be copied.
//@return The pointer to the destination string.
*/

void	ft_bzero(void *s, size_t n);
/*
//@brief Writes n zeroed bytes to the string s. If n is zero, bzero() does nothing.
//@param s The pointer to the string to be zeroed.
//@param n The number of bytes to be zeroed.
//@return None.
*/

void    *ft_memmove(void *dst, const void *src, size_t len);
/*
//@brief Copies len bytes from string src to string dst. The two strings may overlap; the copy is always done in a non-destructive manner.
//@param dst The pointer to the destination string.
//@param src The pointer to the source string.
//@param len The number of bytes to be copied.
//@return The pointer to the destination string.
*/

#endif