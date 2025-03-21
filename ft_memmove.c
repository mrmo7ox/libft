/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-oua <moel-oua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:04:46 by moel-oua          #+#    #+#             */
/*   Updated: 2024/10/30 21:00:59 by moel-oua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char	*new_src;
	char	*new_dst;

	if (dest == (void *)0 && src == (void *)0)
		return (NULL);
	new_src = (char *)src;
	new_dst = (char *)dest;
	if (new_dst > new_src)
	{
		while (len > 0)
		{
			len--;
			new_dst[len] = new_src[len];
		}
	}
	else
	{
		ft_memcpy (dest, src, len);
	}
	return (dest);
}
