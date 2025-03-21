/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-oua <moel-oua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 18:50:10 by moel-oua          #+#    #+#             */
/*   Updated: 2024/10/30 17:49:17 by moel-oua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*src;
	unsigned char	ch;
	size_t			i;

	i = 0;
	src = (unsigned char *)s;
	ch = (unsigned char)c;
	while (i < n)
	{
		if (src[i] == ch)
			return ((void *)(&src[i]));
		i++;
	}
	return (NULL);
}
