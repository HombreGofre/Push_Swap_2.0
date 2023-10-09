/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnunez-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 16:42:39 by cnunez-s          #+#    #+#             */
/*   Updated: 2023/10/09 22:24:04 by cnunez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    ft_error()
{
    write(2, "Error", 6);
    exit(1);
}

int ft_isdigit(int  i)
{
    if (i >= '0' && i <= '9')
        return (1);
    return (0);
}

int	ft_small(t_list **stack_a)
{
	int	small;
	t_list	*aux;

	small = stack_a->content;
	aux = (*stack_a)->next;
	while (aux)
	{
		if (small > aux->content)
			samll = aux-> content;
		aux = aux->next;
	}
	return (small);
}
