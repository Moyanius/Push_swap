/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_order_push.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoyano- <jmoyano-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 17:11:33 by jmoyano-          #+#    #+#             */
/*   Updated: 2022/07/26 20:31:18 by jmoyano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_listpush **b, t_listpush **a)
{
	if (!*b)
		return ;
	insert_node_first(a, (*b)->value);
	*b = (*b)->next;
	printf("PA\n");
}

void	pb(t_listpush **b, t_listpush **a)
{
	if (!*a)
		return ;
	insert_node_first(b, (*a)->value);
	*a = (*a)->next;
	printf("PB\n");
}
