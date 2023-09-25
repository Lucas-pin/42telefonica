/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpin <lpin@student.42.malaga.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 23:30:22 by lpin              #+#    #+#             */
/*   Updated: 2023/09/25 12:06:01 by lpin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		ret;
	size_t	needle_len;

	needle_len = ft_strlen(needle);
	if (*needle == '\0')
		return ((char *)haystack);
	while (len >= needle_len)
	{
		if (*haystack == *needle)
		{
			ret = ft_strncmp(haystack, needle, needle_len);
			if (ret == 0)
				return ((char *)haystack);
		}
		haystack++;
		--len;
	}
	return (NULL);
}

/*int	main(void)
{
	char	arr[] = "Argenentina";
	char	arr_1[] = "ent";
	size_t	len = 7;
	char	*ft_prueba = ft_strnstr(arr, arr_1, len);
	char	*prueba = strnstr(arr, arr_1, len);

	printf("ft_strnstr: %s\n", ft_prueba);
	printf("strnstr: %s\n", prueba);
	return (0);
}*/