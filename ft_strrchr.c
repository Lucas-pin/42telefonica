/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpin < lpin@student.42malaga.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 21:45:32 by lpin              #+#    #+#             */
/*   Updated: 2023/09/24 21:59:46 by lpin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*temp;

	temp = NULL;
	while (*s)
	{
		if (*s == (char)c)
			temp = (char *)s;
		s++;
	}
	return (temp);
}
/*
int	main(void)
{
	char	arr[] = "Argentina";
	char	c = 'n';

	printf("El puntero contiene: %s\n", ft_strrchr(arr, c));
	printf("El puntero contiene: %s\n", strrchr(arr, c));
	return (0);
}
*/