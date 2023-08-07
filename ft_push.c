/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnunez-s <cnunez-s@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 23:31:28 by cnunez-s          #+#    #+#             */
/*   Updated: 2023/08/07 23:38:03 by cnunez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pb(t_list **stack_a, t_list **stack_b)
{
	t_list	*lst;

	if(!(*stack_a))
		return ;
	lst = *stack_a;
	*stack_a = (*stack_a)->next;
	lst->next = NULL;
	ft_lstadd_front(stack_b, lst);
}

void	ft_pa(t_list **stack_a, t_list **stack_b)
{
	t_list	*lst;

	if (!(*stack_b))
		return ;
	lst = *stack_b;
	*stack_b = (*stack_b)->next;
	lst->next = NULL;
	ft_lstadd_front(stack_a, lst);
}
