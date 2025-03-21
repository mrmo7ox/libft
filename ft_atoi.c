/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-oua <moel-oua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 09:13:38 by moel-oua          #+#    #+#             */
/*   Updated: 2024/11/01 15:10:25 by moel-oua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	mover(const char **ptr, int *sign)
{
	while (**ptr == ' ' || (**ptr >= 9 && **ptr <= 13))
		*ptr = *ptr + 1;
	if (**ptr == '-' || **ptr == '+')
	{
		if (**ptr == '-')
			*sign = -1;
		*ptr = *ptr + 1;
	}
}

int	ft_atoi(const char *ptr)
{
	int		sign;
	long	total;
	long	tmp;

	sign = 1;
	total = 0;
	tmp = 0;
	mover(&ptr, &sign);
	while (*ptr >= '0' && *ptr <= '9')
	{
		total = (total * 10) + (*ptr - '0');
		if (total < tmp && sign == 1)
			return (-1);
		if (total < tmp && sign == -1)
			return (0);
		ptr++;
		tmp = total;
	}
	return ((int)(total * sign));
}
