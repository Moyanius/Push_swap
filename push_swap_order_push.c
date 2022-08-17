/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_order_push.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoyano- <jmoyano-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 17:11:33 by jmoyano-          #+#    #+#             */
/*   Updated: 2022/08/17 20:21:10 by jmoyano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_listpush **b, t_listpush **a)
{
	p_stk(b, a);
	printf("pa\n");
}

void	pb(t_listpush **b, t_listpush **a)
{
	p_stk(a, b);
	printf("pb\n");
}

void	p_stk(t_listpush **a, t_listpush **b)
{
	t_listpush	*tmp;

	tmp = NULL;
	if (*b == NULL && *a)
	{
		*b = (t_listpush *)malloc(sizeof(t_listpush));
		(*b)->previous = NULL;
		(*b)->value = (*a)->value;
		(*b)->index = (*a)->index;
		(*b)->previous = NULL;
		(*a) = (*a)->next;
		(*a)->previous = NULL;
	}
	else
	{
		if (*a)
		{
			tmp = (t_listpush *)malloc(sizeof(t_listpush));
			tmp->value = (*a)->value;
			tmp->index = (*a)->index;
			tmp->next = NULL;
			tmp->previous = NULL;
			insert_node_first(b, tmp);
			(*a) = (*a)->next;
		}
	}
}
