/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-oua <moel-oua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 15:15:48 by moel-oua          #+#    #+#             */
/*   Updated: 2024/11/01 20:55:17 by moel-oua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	to_remove(const char *set, char c)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_allocpy(const char *p, size_t start, size_t end)
{
	size_t	total;
	char	*new;

	total = end - start;
	new = (char *)malloc(total + 1);
	if (!new)
		return (NULL);
	ft_memcpy(new, p + start, total);
	new[total] = '\0';
	return (new);
}

char	*len_trim(const char *s1, const char *set)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = ft_strlen(s1);
	while (to_remove(set, s1[i]) && s1[i] != '\0')
		i++;
	while (to_remove(set, s1[j - 1]) && j > i)
		j--;
	if (i >= j)
		return (ft_allocpy("", 0, 0));
	return (ft_allocpy(s1, i, j));
}

char	*ft_strtrim(char const *s1, char const *set)
{
	if (!s1)
		return (NULL);
	return (len_trim(s1, set));
}
