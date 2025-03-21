/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-oua <moel-oua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 17:29:17 by moel-oua          #+#    #+#             */
/*   Updated: 2024/10/30 20:18:14 by moel-oua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	get_len(const char *s, char c)
{
	int	count;
	int	in_char;

	count = 0;
	in_char = 0;
	while (*s)
	{
		if (*s == c && *s)
			in_char = 0;
		else if (!in_char)
		{
			in_char = 1;
			count++;
		}
		s++;
	}
	return (count);
}

static	char	**free_n(char **p, int i)
{
	while (i >= 0)
	{
		free (p[i]);
		i--;
	}
	free (p);
	return (NULL);
}

static char	*add_one(const char *s, char c)
{
	char	*p;
	int		i;

	i = 0;
	while (s[i] != c && s[i])
		i++;
	p = (char *) malloc(sizeof(char) * (i + 1));
	if (!p)
		return (NULL);
	i = 0;
	while (*s != c && *s)
	{
		p[i] = *s;
		i++;
		s++;
	}
	p[i] = '\0';
	return (p);
}

char	**ft_split(char const *s, char c)
{
	char	**p;
	int		len;
	int		i;

	i = 0;
	len = get_len(s, c);
	p = (char **) malloc(sizeof(char *) * (len + 1));
	if (!p)
		return (NULL);
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s != c && *s)
		{
			p[i] = add_one(s, c);
			if (p[i] == NULL)
				return (free_n (p, i));
			i++;
		}
		while (*s != c && *s)
			s++;
	}
	p[i] = NULL;
	return (p);
}
