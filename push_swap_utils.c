/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoyano- <jmoyano-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 17:24:52 by jmoyano-          #+#    #+#             */
/*   Updated: 2022/08/09 13:27:01 by jmoyano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_isdigit_pushswap(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] != '-' && (str[i] < '0' || str[i] > '9'))
			return (0);
		i++;
	}
	return (1);
}

long	ft_atoi_pushswap(const char *str)
{
	int	sign;
	int	result;
	int	i;

	result = 0;
	sign = 1;
	i = 0;
	while (((str[i] && (str[i]) == '\f') || (str[i] == '\t') || (str[i] == ' ')
			|| (str[i] == '\n') || (str[i] == '\r') || (str[i] == '\v')))
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
	if ((result > 0 && sign < 0) || (result < 0 && sign > 0))
		push_swap_errors(3);
	return (result);
}

int min_order_five(t_listpush **a)
{
	int i;
	t_listpush *list_a;

	list_a = *a;
	
	i = list_a->value;
	
	while (list_a->next)
		{
			if(list_a->value < i)
				i = list_a->value;
			list_a = list_a->next;
		}
	return (i);	
}
