/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoyano- <jmoyano-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 10:54:28 by jmoyano-          #+#    #+#             */
/*   Updated: 2022/08/11 12:13:14 by jmoyano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long long	ft_atol(const char *str)
{
	int			sign;
	long long	result;
	int			i;

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
	return (result);
}
