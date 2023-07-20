/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnunez-s <cnunez-s@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 00:42:43 by cnunez-s          #+#    #+#             */
/*   Updated: 2023/07/20 17:31:08 by cnunez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char **argv)
{
	int		n;
	char	**argm;
	//t_list	**stack_a;
	//t_list	**stack_b;

	if (argc <= 2)
		return (0);
	n = 0;
	while (argc > 1)
	{
		argm = ft_split(argv[n], ' ');
		ft_swap(argm);
		n++;	
		argc--;
	}
	return (0);
}

/*
 * Si el número de argumentos es menor que 2 (este no incluido) el programa termina
 * Se añade un contador y mientras que "argc" exista se recorre hasta que deje de
 * existir o sea mayor que uno. Esto se irá añadiendo en un array convirtiendo 
 * "argv" en un array de enteros en los que las funciones a realizar serán los controles
 * de errores. Una vez corroborados los errores se añadirá lso números en forma de nodos 
 * al "stack_a" para después su posterior ordenación con las fucniones correspondientres.
 */
