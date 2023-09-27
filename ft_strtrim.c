/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpin < lpin@student.42malaga.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 17:21:47 by lpin              #+#    #+#             */
/*   Updated: 2023/09/27 13:14:30 by lpin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_reverse_strchr(const char *s, int c)
{
	int	i;
	char	*temp;

	i = 0;
	temp = (char *)s;
	while (temp[i] != (char)c && temp[i] != '\0')
		++i;
	temp[i] = '\0';
	return (temp);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	char	*s1_trimmed;
	char	*s1_concat;
	size_t	s1_len;

	s1_len = strlen(s1);
	s1_trimmed = calloc((s1_len + 1),sizeof(char));
	trim = ft_strchr(s1, set[0]);
	trim++;
	s1_concat = ft_reverse_strchr(s1, set[0]);
	strlcat(s1_trimmed, s1_concat, s1_len);
	s1_concat = ft_reverse_strchr(trim, set[0]);
	trim = ft_strchr(trim, set[0]);
	trim++;
	strlcat(s1_trimmed, s1_concat, s1_len);
	return (s1_trimmed);
}

int	main(void)
{
	char	s1[] = "Perritoperro";
	char	set[] = "er";
	char	*ptr;

	ptr = ft_strtrim(s1, set);
	printf("El contenido de ptr es: %s\n", ptr);
	return (0);
}