/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnunez-s <cnunez-s@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 17:06:44 by cnunez-s          #+#    #+#             */
/*   Updated: 2023/07/19 12:43:47 by cnunez-s         ###   ########.fr       */
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

char **ft_split(char const *s, char c)
{
	char	**new;
	int		i;
	int		len;
	int		start;

	if (!s)
		return (NULL);
	new = malloc(sizeof(char *) * (ft_cont(s, c) + 1));
	if (!new)
		return (NULL);
	i = 0;
	len = 0;
	while (s[i])
	{

	}
}
/*
 * funciones que recorre y guarda el valor de un char resultante entre 
 * los valores de los char "elem". El array debe terminar con un puntero a NULL.
