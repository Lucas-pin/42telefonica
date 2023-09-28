/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpin <lpin@student.42.malaga.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 16:54:24 by lpin              #+#    #+#             */
/*   Updated: 2023/09/28 18:26:44 by lpin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_count_chr(char *s, int c)
{
	size_t	i;
	size_t	s_len;
	size_t	counter;

	i = 0;
	s_len = ft_strlen(s);
	counter = 0;
	while (i < s_len)
	{
		if (s[i] == (char)c)
			++counter;
		++i;
	}
	return (counter);
}

size_t	ft_memoffset(void const *s, int c, size_t len)
{
	size_t	offset;

	offset = 0;
	while (*(char *)s != c && len > 0)
	{
		++offset;
		--len;
		s++;
	}
	return (offset);
}

void	ft_split(char const *s, int c)
{
	char	*to_split;
	char	*aux;
	char	**splitted;
	size_t	counter;
	size_t	offset;

	to_split = (char *)s;
	counter = ft_count_chr(to_split, c);
	while ((counter + 1) != 0)
	{
		aux = ft_substr(to_split, 0, ft_strlen(to_split) + 1);
		to_split = ft_strchr(to_split, c);
		to_split++;
		printf("El aux es: %s\n", aux);
		//printf("El to_split es: %s\n", to_split);
		--counter;
	}
}

int	main(void)
{
	char	s[] = "hola mundo bla eco";
	char	c = 'o';

	ft_split(s, c);
	return (0);
}