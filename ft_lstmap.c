/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpin < lpin@student.42malaga.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 18:37:24 by lpin              #+#    #+#             */
/*   Updated: 2023/10/27 10:56:01 by lpin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del) (void *))
{
	t_list	*new_lst;
	t_list	*new_node;

	new_lst = NULL;
	if (!lst || !del || !f)
		return (NULL);
	while (lst)
	{
		new_node = ft_lstnew(f(lst->content));
		if (!new_node)
			ft_lstclear(&new_lst, del);
		ft_lstadd_back(&new_lst, new_node);
		lst = lst->next;
	}
	return (new_lst);
}

/*void	*ft_uppercase(void *s)
{
	int		i;
	char	*str;
	char	*dst;

	i = 0;
	str = (char *)s;
	dst = malloc(sizeof(char) * ft_strlen(str) + 1);
	while (str[i] != '\0')
	{
		dst[i] = str[i];
		if (dst[i] >= 'a' && dst[i] <= 'z')
			dst[i] = dst[i] - 32;
		++i;
	}
	dst[i] = '\0';
	return (dst);
}

void	del(void *s)
{
	while (*(char *)s)
	{
		*(char *)s = 0;
		s++;
	}
}

int main(void)
{
	char	a[] = "Hola";
	char	b[] = "que";
	char	c[] = "tal";
	char	d[] = "?";
	t_list	*lst;
	t_list	*node_1;
	t_list	*new_lst;

	lst = ft_lstnew(a);
	node_1 = ft_lstnew(b);
	if (!node_1)
		return (0);
	ft_lstadd_back(&lst, node_1);
	node_1 = ft_lstnew(c);
	if (!node_1)
		return (0);
	ft_lstadd_back(&lst, node_1);
	node_1 = ft_lstnew(d);
	if (!node_1)
		return (0);
	ft_lstadd_back(&lst, node_1);
	new_lst = ft_lstmap(lst, ft_uppercase, del);
	printf("La direccion de la lista completa es: %p\n", lst);
	printf("La direccion de la nueva lista es: %p\n", new_lst);
	while (lst)
	{
		printf("El contenido de la lista completa es: %s\n", (char *)lst->content);
		lst = lst->next;
	}
	while (new_lst)
	{
		printf("El contenido de la nueva lista es: %s\n", (char *)new_lst->content);
		new_lst = new_lst->next;
	}
	return (0);
}*/