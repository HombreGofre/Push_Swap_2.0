/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_rotate_rrr.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnunez-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 17:49:14 by cnunez-s          #+#    #+#             */
/*   Updated: 2023/07/28 17:52:17 by cnunez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rev_rotate_ra(t_list **stack_a)
{
	t_list	*head;

	head = ft_lstlaste(&stack_a);
	stack_a = stack_a -> next;
	head -> next = stack_a;
}
