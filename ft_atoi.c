/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpin <lpin@student.42.malaga.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 11:34:39 by lpin              #+#    #+#             */
/*   Updated: 2023/09/25 17:58:41 by lpin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	ret;
	int	sign;
	int	minus;

	sign = 0;
	minus = 0;
	while (*str == 32)
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			minus++;
		++sign;
		str++;
	}
	if (sign > 1)
		return (0);
	while ((*str >= '0' && *str <= '9') && *str != '\0')
	{
		ret = ret * 10 + (*str - '0');
		str++;
	}
	if (minus != 0)
		return (-ret);
	return (ret);
}

/*int	main(void)
{
	char	src_1[] = "835";
	int		ret;
	int		ft_ret;

	ret = atoi(src_1);
	ft_ret = ft_atoi(src_1);
	printf("El ret es: %i\n", ret);
	printf("El ft_ret es: %i\n", ft_ret);
	return (0);
}*/