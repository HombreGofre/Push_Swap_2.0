/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnunez-s <cnunez-s@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 17:06:44 by cnunez-s          #+#    #+#             */
/*   Updated: 2023/07/19 18:00:08 by cnunez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_cont(char const *s, char c)
{
	int	i;
	int	cont;

	i = 0;
	cont = 0;
	while (*s)
	{
		if (*s != c && cont == 0)
		{
			cont = 1;
			i++;
		}
		else if (*s == c)
			cont = 0;
		s++;
	}
	return (i);
}

static	char	**ft_freesplit(char **s)
{
	size_t	i;

	if (s == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		free (s[i]);
		i++;
	}
	free (s);
	return (NULL);
}

static char	**ft_initsplit(char *s, char c)
{
	if (!s)
		return (NULL);
	return (malloc(sizeof(char *) * (ft_cont(s, c) + 1)));
}

char	**ft_split(char const *s, char c)
{
	char	**new;
	int		i;
	int		len;
	int		start;

	new = ft_initsplit(s, c);
	if (!new)
		return (NULL);
	i = 0;
	len = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (!s[i])
			break ;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		new[len++] = ft_substr(s, start, i - start);
		if (!new[len - 1])
			return (ft_fresplit(new));
	}
	new[len] = NULL;
	return (new);
}

/*
 * funciones que recorre y guarda el valor de un char resultante entre 
 * los valores de los char "elem". El array debe terminar con un puntero a NULL.
 */
