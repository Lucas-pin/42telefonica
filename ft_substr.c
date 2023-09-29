/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpin < lpin@student.42malaga.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 16:13:12 by lpin              #+#    #+#             */
/*   Updated: 2023/09/29 02:12:46 by lpin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*ptr;

	while (start > 0)
	{
		s++;
		--start;
	}
	if (start == 0)
		ptr = ft_calloc(len + 1, sizeof(char));
	else
		ptr = ft_calloc((ft_strlen(s) + 1), sizeof(char));
	if (ptr == NULL)
		return (NULL);
	ft_strlcpy(ptr, s, len + 1);
	if (*ptr == '\0')
		return (NULL);
	return (ptr);
}
/*El último "if (*ptr == '\0')" es para evaluar que no retorne 
un puntero vacío, de ser asi retorna nulo*/

/*int	main(void)
{
	char	s1[] = "Argentina";
	char	*ft_ptr;

	ft_ptr = ft_substr(s1, 2, 5);
	printf("ft_ptr contiene: %s\n", ft_ptr);
	printf("La longitud de ft_ptr es: %zu\n", ft_strlen(ft_ptr));
	return (0);
}*/
