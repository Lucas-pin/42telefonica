/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpin < lpin@student.42malaga.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 16:54:24 by lpin              #+#    #+#             */
/*   Updated: 2023/10/10 13:15:36 by lpin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memory_destroyer(char **splitted, int memory_counter)
{
	int	i;

	i = 0;
	while (i < memory_counter)
	{
		free(splitted[i]);
		++i;
	}
	free(splitted);
	return (NULL);
}

size_t	ft_null_strchr(char *s, int c)
{
	size_t	i;
	size_t	s_len;
	size_t	substr_qty;
	int		flag;

	i = 0;
	flag = 0;
	s_len = ft_strlen(s);
	substr_qty = 0;
	while (i < s_len)
	{
		if (s[i] == (char)c)
		{
			s[i] = '\0';
			flag = 1;
		}
		else if (flag == 1 && s[i] != '\0')
		{
			++substr_qty;
			flag = 0;
		}
		++i;
	}
	return (substr_qty + 1);
}

char	**ft_split(char const *s, char c)
{
	char	*to_split;
	char	**splitted;
	size_t	substr_qty;
	size_t	i;

	i = 0;
	to_split = (char *)s;
	substr_qty = ft_null_strchr(to_split, c);
	splitted = (char **)ft_calloc(substr_qty + 1, sizeof(char));
	if (splitted == NULL)
		return (NULL);
	while (i < substr_qty)
	{
		splitted[i] = (char *)ft_calloc(1, ft_strlen(to_split) + 1);
		if (splitted[i] == NULL)
			return (ft_memory_destroyer(splitted, i));
		splitted[i] = ft_substr(to_split, 0, ft_strlen(to_split) + 1);
		if (splitted[i] == NULL)
			return (ft_memory_destroyer(splitted, i));
		to_split = ft_strchr(to_split, 0);
		while (*to_split == '\0')
			to_split++;
		++i;
	}
	return (splitted);
}
/*The ft_substr also can return a NULL, 
because of that it's necessary to repeat the if statement*/
/*
int	main(void)
{
	char	s[] = "hoola     mundo   bla   eco    le   ";
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
}
*/
