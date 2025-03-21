/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-oua <moel-oua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 15:51:42 by moel-oua          #+#    #+#             */
/*   Updated: 2024/10/31 20:01:12 by moel-oua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*new_s;
	size_t	i;

	i = 0;
	new_s = (char *)s;
	while (i < n)
	{
		*new_s = c;
		i++;
		new_s++;
	}
	return (s);
}
