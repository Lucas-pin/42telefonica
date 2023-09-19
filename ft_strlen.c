/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpin <lpin@student.42.malaga.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 16:25:50 by lpin              #+#    #+#             */
/*   Updated: 2023/09/14 16:25:55 by lpin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

int	main(void)
{
	char	arr[6] = "Hello";

	printf("strlen(%s) = %lu\n", arr, strlen(arr));
	printf("ft_strlen(%s) = %lu\n", arr, ft_strlen(arr));
}