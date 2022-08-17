/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_order_swap.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoyano- <jmoyano-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 17:11:33 by jmoyano-          #+#    #+#             */
/*   Updated: 2022/08/17 19:55:13 by jmoyano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_listpush **a)
{
	int	temp;
	int tmpi;

	if ((*a) && (*a)->next)
	{
		temp = (*a)->value;
		tmpi = (*a)->index;
		(*a)->value = (*a)->next->value;
		(*a)->index = (*a)->next->index;	
		(*a)->next->value = temp;
		(*a)->next->index = tmpi;
	}
}

void	sa(t_listpush **list_a)
{
	swap(list_a);
	printf("sa\n");
}

void	sb(t_listpush **list_b)
{
	swap(list_b);
	printf("sb\n");
}

void	ss(t_listpush **list_a, t_listpush **list_b)
{
	swap(list_a);
	swap(list_b);
	printf("ss\n");
}
