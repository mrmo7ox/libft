/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-oua <moel-oua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 10:04:08 by moel-oua          #+#    #+#             */
/*   Updated: 2024/10/30 18:40:20 by moel-oua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*on;
	t_list	*next;

	if (!(*lst) && !del)
		return ;
	on = *lst;
	while (on)
	{
		next = on -> next;
		del(on -> content);
		free(on);
		on = next;
	}
	*lst = (NULL);
}
