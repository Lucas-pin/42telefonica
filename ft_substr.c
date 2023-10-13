/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpin <lpin@student.42.malaga.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 16:13:12 by lpin              #+#    #+#             */
/*   Updated: 2023/10/12 18:37:48 by lpin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;

	if (*s == '\0' || len == '0')
		return (NULL);
	while (start > 0 && *s)
	{
		s++;
		--start;
	}
	ptr = ft_calloc((len + 1), sizeof(char));
	if (ptr == NULL)
		return (NULL);
	ft_strlcpy(ptr, s, len + 1);
	return (ptr);
}

/*
if (*s == '\0' || len == '0'
int	main(void)
{
	char	s1[] = "";
	char	*ft_ptr;

	ft_ptr = ft_substr(s1, 2, 5);
	printf("ft_ptr contiene: %s\n", ft_ptr);
	printf("La longitud de ft_ptr es: %zu\n", ft_strlen(ft_ptr));
	return (0);
}*/
