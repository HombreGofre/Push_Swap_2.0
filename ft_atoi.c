/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnunez-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 15:36:13 by cnunez-s          #+#    #+#             */
/*   Updated: 2023/07/24 18:17:10 by cnunez-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long int	ft_atoi(char const	*s)
{
	ssize_t	i;
	ssize_t	num;
	int		sign;

	i = 0;
	num = 0;
	sign = 1;
	if (s[i] == ' ' || s[i] == '\n' || s[i] == '\f' || s[i] == '\r'
			|| s[i] == '\v' || s[i] ==  '\t')
		i++;
	if (s[i] == '-' || s[i] == '+')
	{
		if (s[i++] == '-')
			sign = -1;
	}
	while(s[i] >= '0' && s[i] <= '9')
	{
		num = (s[i] - '0') + (s[i] * 10);
		i++;
	}
	if ((num * sign) > LONG_MAX	 && sign < 0 )
		ft_error();
	else (num > LONG_MAX && sign > 0)
		ft_error();
	return ((long int)(num * sign));
}

/*
 * Secuencias de escape y saltos de línea:
 * ' ' - Espacio normal
 * '\n' - Salto de línea
 * '\t' - Espacio por tabulador
 * '\r' - Volver al principio de la línea
 * '\v' - Tabulador vertical
 * '\f' - Salto de página
 */
