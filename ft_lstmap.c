/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpin <lpin@student.42.malaga.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 18:37:24 by lpin              #+#    #+#             */
/*   Updated: 2023/10/19 18:39:54 by lpin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*nodo;

	i = 0;
	nodo = lst;
	while (nodo)
	{
		nodo = nodo->next;
		i++;
	}
	return (i);
}

/*Esta funcion es solo relleno, no es la correspondiente*/