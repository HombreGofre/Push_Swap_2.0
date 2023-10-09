/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_five.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnunez-s <cnunez-s@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 17:32:16 by cnunez-s          #+#    #+#             */
/*   Updated: 2023/10/09 22:30:17 by cnunez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_front(t_list **stack_a, t_list **stack_b)
{
	t_list	*aux;
	int		i;

	aux = *stack_a;
	i = 0;
	while (i < 2)
	{
		aux = *stack_a;
		if (aux->content == ft_small(stack_a))
		{
			ft_pb(stack_a, stack_b);
			break;
		}
		ft_swap_sa(stack_a);
		i++;
	}
}

static void ft_back(t_list **satck_a, t_list **stack_b)
{
	t_list	*aux;

	while (ft_lstlen(stack_a) > 3)
	{
		aux = ft_lstlast(*stack_a);
		if (aux->content == ft_small(stack_a))
			ft_pb(stack_a, stack_b);
		else
			ft_rev_rotate_rra(stack_a);
	}
}

void	ft_five(t_list	**stack_a, t_list **stack_b)
{
	while (ft_lstlen(stack_a) > 3)
	{
		ft_front(stack_a, stack_b);
		ft_back(stack_a, stack_b);
	}
	ft_three(stack_a);
	if (ft_lstlen(stack_a) == 3)
		ft_pa(stack_a, stack_b);
	ft_pa(stack_a, stack_b);
}
