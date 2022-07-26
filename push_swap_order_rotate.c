/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_order_rotate.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoyano- <jmoyano-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 17:11:33 by jmoyano-          #+#    #+#             */
/*   Updated: 2022/07/26 19:46:24 by jmoyano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_listpush **a)
{
	int			value_temp;
	t_listpush	*temp;

	value_temp = (*a)->value;
	temp = (*a)->next;
	insert_node_final(&temp, value_temp);
	(*a) = temp;
}

void	ra(t_listpush **list_a)
{
	rotate(list_a);
	printf("RA\n");
}

void	rb(t_listpush **list_b)
{
	rotate(list_b);
	printf("RB\n");
}

void	rr(t_listpush **list_a, t_listpush **list_b)
{
	rotate(list_a);
	rotate(list_b);
	printf("RR\n");
}
