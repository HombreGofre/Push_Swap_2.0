/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnunez-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 16:13:58 by cnunez-s          #+#    #+#             */
/*   Updated: 2023/07/27 00:07:17 by cnunez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	ft_lstnew(int i)
{
	t_list	*new;

	new = malloc(sizeof(t_lsit));
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

	tmp = lst;
	while (tmp -> next != NULL)
	{
		tmp = tmp -> next;
	}
	return tmp;
}

void	ft_lstadd_back(t_list **lst, t_list	*new)
{
	t_list	*tmp;

	if (!*lst)
		return ;
	if (lst)
	{
		tmp = ft_lstlast(lst);
		tmp -> next = new;
	}
	else
		*lst = new;
}
