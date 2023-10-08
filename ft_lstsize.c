/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpin <lpin@student.42.malaga.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 20:23:42 by lpin              #+#    #+#             */
/*   Updated: 2023/10/08 20:26:49 by lpin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

/*int	main(void)
{
	t_list	*prueba;
	t_list	*prueba_2;
	char	c[] = "Hola";
	char	a[] = "Chau";
	int		i;


	prueba = ft_lstnew(c);
	prueba_2 = ft_lstnew(a);
	ft_lstadd_front(&prueba, prueba_2);
	i = ft_lstsize(prueba);
	printf("El content es: %s\n", prueba->content);
	prueba = prueba->next;
	printf("El next es: %s\n", prueba->content);
	printf("El next es: %p\n", prueba->next);
	printf("El size es %d\n", i);
	free(prueba);
	free(prueba_2);
	return(0);
}*/