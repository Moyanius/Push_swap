/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoyano- <jmoyano-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 17:24:52 by jmoyano-          #+#    #+#             */
/*   Updated: 2022/08/11 12:14:02 by jmoyano-         ###   ########.fr       */
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

int	min_order_five(t_listpush **a)
{
	int			i;
	t_listpush	*list_a;

	list_a = *a;
	i = list_a->value;
	while (list_a)
	{
		if (list_a->value < i)
			i = list_a->value;
		list_a = list_a->next;
	}
	return (i);
}

void	smart_selector(t_listpush **a, int min)
{
	int	i;
	int	num;

	i = search_base((*a), min, 1);
	num = lst_len(*a);
	if (num > i)
		ra(a);
	else
		rra(a);
}

int	search_base(t_listpush *stk, int num, int option)
{
	int	i;

	i = 1;
	if (option == 1)
	{
		while (stk)
		{
			if (stk->value <= num)
				return (i);
			stk = stk->next;
		}
	}
	if (option == 2)
	{
		while (stk)
		{
			if (stk->value >= num)
				return (i);
			stk = stk->next;
			i++;
		}
	}
	return (-1);
}
