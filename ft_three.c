/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_three.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnunez-s <cnunez-s@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 23:27:01 by cnunez-s          #+#    #+#             */
/*   Updated: 2023/10/09 17:30:19 by cnunez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap"

static void	ft_three_mov(t_list **stack_a)
{
	t_list	*prev;
	t_list	*aux;

	prev = *stack_a;
	aux = prev->next;
	if(prev->content > aux->content)
	{
		aux = aux->next;
		if (prev->content > aux->content)
		{
			prev = prev->next;
			if(prev->content > aux->content)
			{
				ft_swap_sa(stack_a);
				ft_rev_rotate_ra(stack_a);
			}
			else
				ft_rotate_ra(stack_a):
		}
		else
			ft_swap_sa(stack_a);
	}
}

void	ft_three(t_list **stack_a)
{
	t_list	*prev;
	t_list	*aux;

	prev = *stack_a;
	aux = prev->next;
	if (prev->content > aux->content)
		ft_three_mov(stack_a);
	else
	{
		aux = aux->next;
		if (prev->content > aux->content)
			ft_rev_rotate_ra(stack_a);
		else
		{
			ft_swap_sa(stack_a);
			ft_rotate_ra(stack_a);
		}
	}
}
