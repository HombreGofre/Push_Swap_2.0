#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

typedef struct s_list
{
	int		content;
	struct s_list	*next;
}	t_list;

t_list	*ft_lst(int	i)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (0);
	new -> next = NULL;
	new -> content = i;
	return (new);
}

t_list	*ft_lstlast(t_list	*lst)
{
	t_list	*tmp;

	while (lst -> next != NULL)
	{
		tmp = lst;
		lst = lst -> next;
	}
	return (tmp);
}

/*void ft_lstadd_back(t_list	**lst, t_list *new)
{
	t_list	*tmp;

	if(lst == NULL || new == NULL)
		return ;
	if (*lst != NULL)
	{
		tmp = ft_lstlast(*lst);
		tmp -> next = new;
	}
	else
		*lst = new;
}*/

void ft_lstadd_front(t_list	**lst, t_list	*new)
{
	if (*lst)
		new -> next = *lst;
	*lst = new;
}

void	ft_swap_sa(t_list	**lst)
{
	t_list	*tmp;

	if (!lst || !*lst || !(*lst)->next)
		return ;
	tmp = *lst;
	*lst = (*lst) -> next;
	tmp -> next = (*lst) -> next;
	(*lst) -> next = tmp;
	printf("\nsa\n");
}

static void	ft_show(t_list **lst)
{
	t_list *show;

	if (!lst)
		return ;
	show = *lst;
	while (show)
	{
		printf(" %d", show -> content);
		show = show -> next;
	}
	printf("\n");
	//free(show);
}

int main()
{
	t_list	*lst;
	t_list	*new;
	int 	i;

	i = 0;
	lst = NULL;
	while (i < 5)
	{
		new = ft_lst(i);
		ft_lstadd_front(&lst, new);
		i++;
	}
	ft_show(&lst);
	ft_swap_sa(&lst);
	ft_show(&lst);
}
