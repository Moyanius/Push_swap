/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoyano- <jmoyano-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 17:24:52 by jmoyano-          #+#    #+#             */
/*   Updated: 2022/07/11 17:49:22 by jmoyano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_isdigit_pushswap(int c)
{
	if (c >= -2147483648 && c <= 2147483647)
	{
		return (1);
	}
	return (0);
}

int	ft_atoi(const char *str)
{
	int		sign;
	int		result;
	int		i;

	result = 0;
	sign = 1;
	i = 0;
	while (((str[i] && (str[i]) == '\f') || (str[i] == '\t')
			|| (str[i] == ' ') || (str[i] == '\n') || (str[i] == '\r')
			|| (str[i] == '\v')))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i++] == '-')
			sign = -1;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result += str[i++] - '0';
	}
	result *= sign;
	return (ft_isdigit_pushswap(result));
}