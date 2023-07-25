/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnunez-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 14:12:52 by cnunez-s          #+#    #+#             */
/*   Updated: 2023/07/26 00:33:20 by cnunez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	*ft_parse(char	*tmp, int	*at)
{
	int	i;

	i = 0;
	while (tmp[i])
	{
		//printf("[%d] -> '%c'\n", i, tmp[i]);
		if ((tmp[i] == '-' || tmp[i] == '+')
				&& (tmp[i + 1] == '-' || tmp[i + 1] == '+'))
			ft_error();
		if ((tmp[i] == '-' || tmp[i] == '+') && !ft_isdigit(tmp[i + 1]))
			ft_error();
		if (!ft_isdigit(tmp[i]))
        {
//            printf("El problema está aauí\n");
            ft_error();
        }
		i++;
	}

}

t_list	**ft_firstmov(char	**tmp)
{
	t_list	**lst_a;
	int		i;

	i = 0;
	lst_a = ft_lstnew(ft_atoi(tmp[i]))
	while (tmp[++i])
		ft_lstadd_back(lst_a ,ft_atoi(tmp[i]));
	return (lst_a);
}

int	ft_check_nums(char	**num)
{
	int		i;
	int		j;
	char	**tmp;

	i = 0;
	j = 1;
	tmp = num;
	while (num[i]) 
	{
		while (tmp[j] && tmp[j] != num[i])
		{
			if (tmp[j] == num[i] || tmp[i] > num[i])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

t_list	**ft_swap(char **arg)
{
	int		i;
	int		*at;
	char	**tmp;
	t_list	**nums;

	i = 0;
	tmp = arg;
	at =  0;
	while (tmp[i])
	{
		//printf("Swap: %s\n", tmp[i]);
		ft_parse(tmp[i]);
		nums = ft_firstmov(tmp[i]);
		if (!ft_check_nums(tmp[i]))
			ft_error();
		i++;
	}
	return (nums);
}

/*
 * Desde que el programa entra en swap se quiere lograr añadir en orden en
 * el que aparecen los números ya casteados dentro de la lista enlazada
 * siendo todos estos números válidos. En caso de que no lo sean el programa
 * debe finalizar sin leaks. (a la hora de parsear el programa, se debe tener
 * en cuenta que sólo única y exclusivamente haya números enteros entre los
 * máximos y mínimos de un INT)
 */
