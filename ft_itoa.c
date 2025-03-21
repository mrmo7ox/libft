/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-oua <moel-oua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 10:45:04 by moel-oua          #+#    #+#             */
/*   Updated: 2024/10/30 20:26:24 by moel-oua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	get_len(int n)
{
	int		i;

	i = 0;
	if (n < 0)
	{
		i += 1;
	}
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

void	put_in(char *p, int n, int len)
{
	int	i;

	i = len - 1;
	if (n < 0)
	{
		p[0] = '-';
		n = -n;
	}
	while (n > 0)
	{
		p[i] = (n % 10) + '0';
		n /= 10;
		i--;
	}
}

char	*ft_itoa(int n)
{
	int		len;
	char	*p;

	if (n == 0)
	{
		p = (char *)malloc(2);
		if (p)
		{
			p[0] = '0';
			p[1] = '\0';
		}
		return (p);
	}
	if (n == -2147483648)
	{
		return (ft_strdup("-2147483648"));
	}
	len = get_len(n);
	p = (char *) malloc(sizeof(char) * (len + 1));
	if (!p)
		return (NULL);
	put_in (p, n, len);
	p[len] = '\0';
	return (p);
}
