/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpin <lpin@student.42.malaga.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 12:43:14 by lpin              #+#    #+#             */
/*   Updated: 2023/10/09 13:22:54 by lpin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*node;

	node = *lst;
	while ((*lst)->next)
		*lst = (*lst)->next;
	(*lst)->next = new;
	*lst = node;
}

/*int	main(void)
{
	t_list	*lst;
	t_list	*node_1;
	t_list	*last_node;
	char	a[] = "Hola";
	char	b[] = "que";
	char	c[] = "tal";
	char	d[] = "?";
	char	e[] = "Bien";

	lst = ft_lstnew(d);
	node_1 = ft_lstnew(c);
	ft_lstadd_front(&lst, node_1);
	node_1 = ft_lstnew(b);
	ft_lstadd_front(&lst, node_1);
	node_1 = ft_lstnew(a);
	ft_lstadd_front(&lst, node_1);
	node_1 = ft_lstnew(e);
	ft_lstadd_back(&lst, node_1);
	printf("El contenido de la lista es: %s\n", lst->content);
	last_node = ft_lstlast(lst);
	printf("El content de last_node es: %s\n", (char *)last_node->content);
	printf("El next de last_node es: %p\n", last_node->next);
	while (lst)
	{
		printf("El contenido de la lista completa es: %s\n", lst->content);
		lst = lst->next;
	}
	free(lst);
	return (0);
}*/
