/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnunez-s <cnunez-s@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 00:42:43 by cnunez-s          #+#    #+#             */
/*   Updated: 2023/10/09 17:04:14 by cnunez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lgorithm(t_list	**stack_a, t_list	**stack_b)
{
	int	i;

	i = ft_lstlen(stack_a);

	if (i <= 3)
		ft_three(stack_a);
	else if (i > 3 && i >= 5)
		ft_five(stack_a, stack_b);
	else if (i <= 100)
		ft_hundred(stack_a, stack_b);
	else if (i <= 500)
		ft_huge(stack_a, stack_b);
}

int main(int argc, char **argv)
{
	int		n;
	char	**argm;
	t_list	**stack_a;
	t_list	**stack_b;

	if (argc <= 1)
		return (0);
	n = 1;
	while (n < argc)
	{
		argm = ft_split(argv[n], ' ');
		stack_a = ft_swap(argm);
		n++;	
	}
	ft_algorithm(stack_a, stack_b);
}

/*
 * Si el número de argumentos es menor que 2 (este no incluido) el programa termina
 * Se añade un contador y mientras que "argc" exista se recorre hasta que deje de
 * existir o sea mayor que uno. Esto se irá añadiendo en un array convirtiendo 
 * "argv" en un array de enteros en los que las funciones a realizar serán los controles
 * de errores. Una vez corroborados los errores se añadirá lso números en forma de nodos 
 * al "stack_a" para después su posterior ordenación con las fucniones correspondientres.
 */
