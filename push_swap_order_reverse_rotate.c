/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_order_reverse_rotate.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoyano- <jmoyano-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 17:11:33 by jmoyano-          #+#    #+#             */
/*   Updated: 2022/07/26 19:47:34 by jmoyano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate(t_listpush **a)
{
	t_listpush	*temp;
	t_listpush	*temp2;

	temp = (*a);
	while (temp->next->next != NULL)
		temp = temp->next;
	temp2 = temp->next;
	temp2->next = (*a);
	(*a) = temp2;
	temp->next = NULL;
}

void	rra(t_listpush **list_a)
{
	reverse_rotate(list_a);
	printf("RRA\n");
}

void	rrb(t_listpush **list_b)
{
	reverse_rotate(list_b);
	printf("RRB\n");
}

void	rrr(t_listpush **list_a, t_listpush **list_b)
{
	reverse_rotate(list_a);
	reverse_rotate(list_b);
	printf("RRR\n");
}
