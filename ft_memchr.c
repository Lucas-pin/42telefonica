/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpin < lpin@student.42malaga.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 22:48:29 by lpin              #+#    #+#             */
/*   Updated: 2023/09/24 23:04:00 by lpin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

char	*ft_memchr(const void *s, int c, size_t n)
{
	void	*temp;

	temp = NULL;
	while (n > 0)
	{
		if (*(unsigned char *)s == (char)c)
		    temp = (unsigned char *)s;
		s++;
        --n;
	}
	return (temp);
}

/*int	main(void)
{
	char	arr[] = "Arg\0entina";
	char	c = 'n';
    size_t  n = 6;
    char    *ft_prueba = ft_memchr(arr, c, n);
    char    *prueba = memchr(arr, c, n);
	printf("El puntero contiene: %s\n", ft_prueba);
	printf("El puntero contiene: %s\n", prueba);
	return (0);
}*/
