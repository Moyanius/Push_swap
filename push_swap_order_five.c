/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_order_five.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoyano- <jmoyano-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 14:46:53 by jmoyano-          #+#    #+#             */
/*   Updated: 2022/08/11 12:04:12 by jmoyano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	lst_len(t_listpush *a)
{
	int	i;

	i = 0;
	while (a)
	{
		i++;
		a = a->next;
	}
	return (i);
}

void	order_five(t_listpush **a, t_listpush **b)
{
	int			i;
	int			min;
	t_listpush	*tmp1;
	t_listpush	*tmp2;

	i = lst_len(*a);
	while (i > 3)
	{
		min = min_order_five(a);
		tmp1 = (*a)->next;
		if ((*a)->value != min && tmp1 && tmp1->value == min)
			sa(a);
		while (min != (*a)->value)
			smart_selector(a, min);
		if (min == (*a)->value)
		{
			tmp2 = *a;
			pb(b, a);
			free(tmp2);
			i--;
		}
	}
	order_three(a);
	pa(b, a);
	pa(b, a);
}
