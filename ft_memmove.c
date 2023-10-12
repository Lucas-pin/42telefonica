/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpin < lpin@student.42malaga.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 13:18:47 by lpin              #+#    #+#             */
/*   Updated: 2023/10/12 13:41:55 by lpin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char	*dest_char;
	char	*src_char;
	size_t	i;

	dest_char = (char *)dest;
	src_char = (char *)src;
	i = 0;
	if (dest_char > src_char)
	{
		while (len > 0)
		{
			dest_char[len - 1] = src_char[len - 1];
			--len;
		}
	}
	else
	{
		while (i < len)
		{
			dest_char[i] = src_char[i];
			++i;
		}
	}
	return (dest_char);
}

/*int	main(void)
{
	char	src[] = "Argentina";
	char	src_1[] = "Argentina";
	char	src_2[] = "Argentina";
	char	*prueba_ft;
	char	*prueba;
	char	*prueba_memcpy;

	prueba_ft = ft_memmove(src+3, src, 5);
	printf("El puntero de prueba_ft contiene: %s\n", prueba_ft);
	printf("El src contiene: %s\n", src);
	prueba = memmove(src_1+3, src_1, 5);
	prueba_memcpy = memcpy(src_2+3, src_2, 5);
	printf("El puntero de prueba contiene: %s\n", prueba);
	printf("El src_1 contiene: %s\n", src_1);
	printf("El puntero de prueba_memcpy contiene: %s\n", prueba_memcpy);
	printf("El src_2 contiene: %s\n", src_2);
	return (0);
}*/
