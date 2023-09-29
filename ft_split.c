/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpin < lpin@student.42malaga.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 16:54:24 by lpin              #+#    #+#             */
/*   Updated: 2023/09/29 02:13:21 by lpin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_null_strchr(char *s, int c)
{
	size_t	i;
	size_t	s_len;
	size_t	null_counter;
	int		flag;

	i = 0;
	flag = 0;
	s_len = ft_strlen(s);
	null_counter = 0;
	while (i < s_len)
	{
		if (flag == 1 && s[i] != '\0')
			++null_counter;
		if (s[i] == (char)c)
			s[i] = '\0';
		if (s[i] == '\0')
			flag = 1;
		else
			flag = 0;
		++i;
	}
	return (null_counter);
}

char	**ft_split(char const *s, int c)
{
	char	*to_split;
	char	**splitted;
	size_t	null_counter;
	int		i;

	i = 0;
	to_split = (char *)s;
	null_counter = ft_null_strchr(to_split, c);
	splitted = (char **)ft_calloc(null_counter + 1, sizeof(char));
	if (splitted == NULL)
		return (NULL);
	while ((null_counter + 1) != 0)
	{
		splitted[i] = (char *)ft_calloc(1, ft_strlen(to_split) + 1);
		if (splitted[i] == NULL)
			return (NULL);
		splitted[i] = ft_substr(to_split, 0, ft_strlen(to_split) + 1);
		if (splitted[i] != NULL)
			++i;
		to_split = ft_strchr(to_split, 0);
		to_split++;
		--null_counter;
	}
	return (splitted);
}

/*int	main(void)
{
	char	s[] = "hoola  mundo bla eco";
	char	c = ' ';
	char	**splitted;
	int		i;

	i = 0;
	splitted = ft_split(s, c);
	while (splitted[i] != (void *)0)
	{
		printf("El substring contiene: %s\n", splitted[i]);
		++i;
	}
	return (0);
}*/
