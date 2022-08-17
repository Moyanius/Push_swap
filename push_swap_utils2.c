/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoyano- <jmoyano-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 10:54:28 by jmoyano-          #+#    #+#             */
/*   Updated: 2022/08/17 17:19:02 by jmoyano-         ###   ########.fr       */
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

int redond_up(float flt)
{
	int a;
	a = (int)flt;
	
	if((a - flt) >= 0.5)
		a++;	
	return (a);
}

t_listpush	*ft_lst_dup(t_listpush *list)
{
	t_listpush	*tmp1;
	t_listpush	*tmp2;

	tmp1 = ft_calloc(1, sizeof(t_listpush));
	tmp2 = tmp1;
	while (list)
	{
		tmp1->value = list->value;
		if (list->next)
		{
			tmp1->next = calloc(1, sizeof(t_listpush));
			tmp1 = tmp1->next;
		}
		list = list->next;
	}
	tmp1 = tmp2;
	return (tmp1);
}