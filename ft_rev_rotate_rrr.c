/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_rotate_rrr.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnunez-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 17:49:14 by cnunez-s          #+#    #+#             */
/*   Updated: 2023/07/30 21:52:06 by cnunez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rev_rotate_ra(t_list **stack_a)
{
	t_list	*last;
	t_list	*del;

	if (!(*stack_a) || !(*stack_a) -> next)
		return ;
	last = ft_lstlast(*stack_a);
	del = *stack_a;
	while (del->next != last)
		del = del->next;
	del -> next = NULL;
	ft_lstadd_front(stack_a, last);
}

void    ft_rev_rotate_ra(t_list **stack_b)
{
    t_list  *last;
    t_list  *del;

    if (!(*stack_b) || !(*stack_b) -> next)
        return ;
    last = ft_lstlast(*stack_b);
    del = *stack_b;
    while (del->next != last)
        del = del->next;
    del -> next = NULL;
    ft_lstadd_front(stack_b, last);
}

void	ft_rev_rotate_rr(t_list	**stack_a, t_list	**stack_b)
{
	ft_rev_rotate(stack_a);
	ft_rev_rotate(stack_b);
}
