/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpin <lpin@student.42.malaga.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 17:41:15 by lpin              #+#    #+#             */
/*   Updated: 2023/09/22 17:53:40 by lpin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	i = 0;
	if (dstsize > 0)
	{
		while (dst[i] != '\0')
		{
			/* code */
		}
		
		while (src[i] != '\0' && i < dstsize - dst_len - 1)
		{
			dst[i] = src[i];
			++i;
		}
		*dst = '\0';
	}
	
}