/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpin <lpin@student.42.malaga.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 17:21:47 by lpin              #+#    #+#             */
/*   Updated: 2023/09/28 16:54:11 by lpin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

size_t	ft_null_strchr(char *s, int c)
{
	size_t	i;
	size_t	s_len;
	size_t	null_counter;

	i = 0;
	s_len = ft_strlen(s);
	null_counter = 0;
	while (i < s_len)
	{
		if (s[i] == (char)c)
		{
			s[i] = '\0';
			++null_counter;
		}
		++i;
	}
	return (null_counter);
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

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s1_trimmed;
	size_t	s1_len;
	size_t	offset;
	size_t	null_counter;

	s1_len = ft_strlen(s1);
	s1_trimmed = ft_calloc((s1_len + 1), sizeof(char));
	if (s1_trimmed == NULL)
		return (NULL);
	s1_trimmed = (char *)s1;
	while (*set)
	{
		null_counter = ft_null_strchr(s1_trimmed, *set);
		offset = ft_memoffset(s1_trimmed, 0, s1_len);
		while (null_counter > 0)
		{
			ft_memmove(s1_trimmed + offset, s1_trimmed
				+ offset + 1, s1_len - offset);
			offset = ft_memoffset(s1_trimmed, 0, s1_len);
			--null_counter;
		}
		set++;
	}
	return (s1_trimmed);
}

/*int	main(void)
{
	char	s1[] = "tres tristes tigres comen trigo en un trigal";
	char	set[] = "rti";
	char	*ptr;
	size_t	s1_len = strlen(s1);
	size_t	i;

	ptr = ft_strtrim(s1, set);
	i = 0;
	printf("El contenido de ptr es: %s\n", ptr);
	return (0);
}*/