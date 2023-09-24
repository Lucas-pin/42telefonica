/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpin < lpin@student.42malaga.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 22:12:52 by lpin              #+#    #+#             */
/*   Updated: 2023/09/24 22:40:01 by lpin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n > 0 && *s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		--n;
		s1++;
		s2++;
	}
	if (n != 0)
		return (*s1 - *s2);
	return (0);
}

/*int	main(void)
{
	char	s1[] = "Ar";
	char	s2[] = "A";
	size_t n = 2;

	printf("ft_strncmp: %i\n", ft_strncmp(s1, s2, n));
	printf("strncmp: %i\n", strncmp(s1, s2, n));
	return (0);
}*/