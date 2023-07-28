/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_rr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnunez-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 17:15:48 by cnunez-s          #+#    #+#             */
/*   Updated: 2023/07/28 17:47:45 by cnunez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rotate_ra(t_list **stack_a)
{
	t_list	*last;

	last = stack_a;
	*stack_a = (*stack_a)->next;
	last -> next = NULL;
	ft_lstadd_back(stack_a, last);
}

void	ft_rotate_rb(t_list **stack_b)
{
	t_list	*last;

	last = stack_b;
	*stack_b = (*stack_b)->next;
	last -> next = NULL;
	ft_lstadd_back(stack_b, last);
}

void	ft_rotate_rr(t_list **stack_a, t_list **stack_b)
{
	ft_rotate_ra(stack_a);
	ft_rotate_rb(stack_b);
}
