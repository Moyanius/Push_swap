/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils3.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoyano- <jmoyano-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 17:22:02 by jmoyano-          #+#    #+#             */
/*   Updated: 2022/08/17 18:49:15 by jmoyano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	medium_list(t_listpush *list)
{
	t_listpush	*tmp;
	int		len;
	int		pvt;

	pvt = 0;
	len = 0;
	tmp = NULL;
	len = lst_len(list);
	tmp = list_simulator(list);
	if (len <= 10)
		pvt = redond_up(len / 2);
	else if (len > 10 && len < 200)
		pvt = redond_up(len / 4);
	else if (len >= 200)
		pvt = redond_up(len / 8);
	return (ft_lstnbr(&tmp, pvt));
}

t_listpush *list_simulator(t_listpush *list)
{
	t_listpush	*tmp;
	t_listpush	*base;
	t_listpush	*compa;
	
	base = NULL;
	base = list;
	tmp = NULL;
	compa = NULL;
	while(base->next)
	{
		compa = base;
		tmp = base->next;
		while(tmp)
		{
			if(compa->value > tmp->value)
				compa = tmp;
			tmp = tmp->next;
		}
	order_swap_list(base, compa);
	base = base->next;	
	}
	return (list);
}

void order_swap_list(t_listpush *a, t_listpush *b)

{
	int tmp;
	
	tmp = a->value;
	a->value = b->value;
	b->value = tmp;
}

int	check_medium(t_listpush *a, int pvt, int flag)
{
	while (a)
	{
		if (flag == 1)
		{
			if (a->value <= pvt)
				return (1);
			a = a->next;
		}
		if (flag == 2)
		{
			if (a->value == pvt)
				return (1);
			a = a->next;
		}
	}
	return (0);
}

int	get_max(t_listpush *list)
{
	int			max;
	t_listpush	*tmp;

	max = 0;
	tmp = NULL;
	if (list)
	{
		max = list->value;
		tmp = list;
		while (list)
		{
			if (list->value >= max)
				max = list->value;
			list = list->next;
		}
		list = tmp;
	}
	return (max);
}