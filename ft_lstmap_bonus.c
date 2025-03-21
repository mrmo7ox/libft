/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-oua <moel-oua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 10:50:43 by moel-oua          #+#    #+#             */
/*   Updated: 2024/10/30 20:54:36 by moel-oua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	handle_error(t_list **head, void *contenty, void (*del)(void *))
{
	ft_lstclear (head, del);
	if (contenty)
		del (contenty);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*node;
	void	*contenty;

	if (!lst || !f || !del)
		return (NULL);
	head = NULL;
	while (lst)
	{
		contenty = f(lst->content);
		if (!contenty)
		{
			handle_error(&head, contenty, del);
		}
		node = ft_lstnew(contenty);
		if (!node)
		{
			handle_error(&head, contenty, del);
		}
		ft_lstadd_back (&head, node);
		lst = lst->next;
	}
	return (head);
}
