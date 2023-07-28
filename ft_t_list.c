/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnunez-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 16:13:58 by cnunez-s          #+#    #+#             */
/*   Updated: 2023/07/28 17:03:00 by cnunez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	ft_lstnew(int i)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new -> next = NULL;
	new -> content = i;
	return (new);
}

int	ft_lstlen(t_list	**lst)
{
	int	i;

	i = 0;
	if (!lst)
		return (0);
	while (lst -> next != NULL)
	{
		i++;
		lst = lst -> next;
	}
	return (i);
}

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*tmp;

	while (lst -> next != NULL)
	{
		tmp = lst;
		lst = lst -> next;
	}
	return (tmp);
}

void	ft_lstadd_back(t_list **lst, t_list	*new)
{
	t_list	*tmp;

	if (!lst == NULL || new  == NULL)
		return ;
	if (*lst ! = NULL)
	{
		tmp = ft_lstlast(*lst);
		tmp -> next = new;
	}
	else
		*lst = new;
}

void	ft_lstadd_front(t_list	**lst, t_list *new)
{
	if (*lst)
		new -> next = *lst;
	*lst = new;
}
