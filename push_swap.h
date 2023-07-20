/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnunez-s <cnunez-s@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 23:57:50 by cnunez-s          #+#    #+#             */
/*   Updated: 2023/07/20 17:25:14 by cnunez-s         ###   ########.fr       */
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

//PARSE

void	ft_error(void);
void	*ft_parse(char	*tmp);
void	**ft_swap(char	**arg);

#endif
