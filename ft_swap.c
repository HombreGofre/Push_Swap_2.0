/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnunez-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 14:12:52 by cnunez-s          #+#    #+#             */
/*   Updated: 2023/07/20 17:43:38 by cnunez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*t_list	**ft_firstmov(char	**tmp)
{
	t_list	**lst_a;
	int		i;

	i = 0;

	return (lst_a);
}*/

void	*ft_parse(char	*tmp)
{
	int	i;

	i = 0;
	while (tmp[i])
	{
		if (tmp[i] == ' ')
			ft_error();
		if ((tmp[i] == '-' || tmp[i] == '+')
				&& (tmp[i + 1] == '-' || tmp[i + 1] == '+'))
			ft_error();
		if ((tmp[i] == '-' || tmp[i] == '+') && !ft_isdigit(tmp[i + 1]))
			ft_error();
		if (!ft_isdigit(tmp[i]))
        {
            printf("El problema está aauí\n");
            ft_error();
        }
		i++;
	}
	return (0);
}

void	**ft_swap(char **arg)
{
	int		i;
	char	**tmp;
	//t_list	**nums;

	i = 0;
	tmp = arg;
	while (tmp[i])
	{
		ft_parse(tmp[i]);
		//nums = ft_firstmov(tmp[i]);
		i++;
	}
	//return (nums);
	return (0);
}

/*
 * Desde que el programa entra en swap se quiere lograr añadir en orden en
 * el que aparecen los números ya casteados dentro de la lista enlazada
 * siendo todos estos números válidos. En caso de que no lo sean el programa
 * debe finalizar sin leaks. (a la hora de parsear el programa, se debe tener
 * en cuenta que sólo única y exclusivamente haya números enteros entre los
 * máximos y mínimos de un INT)
 */
