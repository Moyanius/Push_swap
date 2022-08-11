/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoyano- <jmoyano-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 10:54:28 by jmoyano-          #+#    #+#             */
/*   Updated: 2022/08/11 12:59:27 by jmoyano-         ###   ########.fr       */
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

int	order_ok(t_listpush *a)
{
	int	prev;

	prev = 0;
	if (!a)
		return (0);
	while (a)
	{
		if (prev && prev > a->value)
			return (0);
		prev = a->value;
		a = a->next;
	}
	return (1);
}

int	order_check(t_listpush *a, t_listpush *b, char c)
{
	int	len;
	int	count;

	count = 0;
	len = 0;
	while (c == 'a' && a)
	{
		if (a->value == len)
			count++;
		else
			count = 0;
		len++;
		a = a->next;
	}
	len = lst_len(b) - 1;
	while (c == 'b' && b)
	{
		if (b->value == len)
			count++;
		else
			count = 0;
		len--;
		b = b->next;
	}
	return (count);
}