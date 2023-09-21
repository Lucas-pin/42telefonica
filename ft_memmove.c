/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpin < lpin@student.42malaga.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 13:18:47 by lpin              #+#    #+#             */
/*   Updated: 2023/09/21 12:23:22 by lpin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	ptrdiff_t distance;

	distance = src - dest;
	if (distance > len)
	{
		while (len > 0)
		{
			*(char *)dest = *(char *)src;
			--len;
		}
	}
	else if (distance < len)
	{
		while (distance > 0)
		{
			*(char *)dest = *(char *)src;
			--distance;
		}
	}
}
