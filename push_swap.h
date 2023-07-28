/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnunez-s <cnunez-s@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 23:57:50 by cnunez-s          #+#    #+#             */
/*   Updated: 2023/07/28 17:14:11 by cnunez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <limits.h>
# include <string.h>
# include <stdlib.h>

//STRUCT
typedef struct s_list
{
	int				content;
	struct s_list	*next;
}	t_list;

//UTILS

char	*ft_strdup(char const *s);
char	*ft_substr(char const *s, unsigned int	start, size_t	len);
size_t	ft_strlen(char const *c);
char	**ft_split(char const *s, char c);
int		ft_isdigit(int	i);
long int	ft_atoi(char const *s);

//PARSE

void	ft_error(void);
void	*ft_parse(char	*tmp);
int		ft_check_dup(char	**num);
int		ft_check_sort(char	**num);
t_list	**ft_swap(char	**arg);
t_list	**ft_firstmov(char	**tmp);

//T_LIST

t_list	*ft_lstnew(int	i);
t_list	*ft_lstlast(t_list	*lst);
void	ft_lstadd_back(t_list **lst, t_list	*new);
void	ft_lstadd_front(t_list **lst, t_list *new);
int		ft_lstlen(stack_a, stack_b);

//MOVE

void	ft_swap_sa(t_list **stack_a);
void	ft_swap_sb(t_list **stack_b);
void	ft_swap_ss(t_list **stack_a, t_ñlist **stack_b);

#endif
