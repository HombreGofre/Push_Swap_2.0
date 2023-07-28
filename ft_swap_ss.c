/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_ss.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnunez-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 14:45:21 by cnunez-s          #+#    #+#             */
/*   Updated: 2023/07/28 17:13:31 by cnunez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap_sa(t_list	**stack_a)
{
	t_list	*tmp;

	if (!stack_a || !(*stack_a) || !(*stack_a)->next)
		return ;
	tmp = *stack_a;
	*stack_a = *(stack_a)->next;
	tmp -> next = (*stack_a)->next;
	(*stack_a)->next = tmp;
}

void	ft_swap_b(t_list	**stack_b)
{
	t_list	*tmp;

	if (!stack_b || !(*stack_b) || !(*stack_b)->next)
		return ;
	tmp = *stack_b;
	*stack_b = *(stack_b)->next;
	tmp -> next = (*stack_b)->next;
	(*stack_b)->next = tmp;
}

void	ft_swap_ss(t_list	**stack_a, t_list **stack_b)
{
	ft_swap_sa(stack_a);
	ft_swap_sb(stack_b);
}
