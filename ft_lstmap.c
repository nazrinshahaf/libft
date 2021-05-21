/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfernand <nfernand@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 11:11:43 by nfernand          #+#    #+#             */
/*   Updated: 2021/05/21 12:54:41 by nfernand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

t_list	*ft_lstmap_fill(t_list *lst, void *(*f)(void *), void (*del)(void *),
		t_list *new, t_list *head)
{
	while (lst)
	{
		new = ft_lstnew(f(lst->content));
		if (!new)
		{
			ft_lstclear(&lst, del);
			ft_lstclear(&head, del);
			return (NULL);
		}
		ft_lstadd_back(&head, new);
		lst = lst->next;
	}
	return (head);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*head;

	if (!lst || !f)
		return (NULL);
	head = ft_lstnew(f(lst->content));
	if (!head)
	{
		ft_lstclear(&lst, del);
		return (NULL);
	}
	new = head;
	lst = lst->next;
	if (!(ft_lstmap_fill(lst, f, del, new, head)))
		return (NULL);
	return (head);
}
