/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_order_swap.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoyano- <jmoyano-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 17:11:33 by jmoyano-          #+#    #+#             */
/*   Updated: 2022/07/26 19:16:18 by jmoyano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_listpush **a)
{
	int	temp;

	if ((*a) && (*a)->next)
	{
		temp = (*a)->value;
		(*a)->value = (*a)->next->value;
		(*a)->next->value = temp;
	}
}

void sa(t_listpush **list_a)
{
	swap(list_a);
	printf("SA");
}

void sb(t_listpush **list_b)
{
	swap(list_b);
	printf("SB");
}
void ss(t_listpush **list_a, t_listpush **list_b)
{
	swap(list_a);
	swap(list_b);
	printf("SS");
}

void	rotate(t_listpush **a)
{
	int			value_temp;
	t_listpush	*temp;

	value_temp = (*a)->value;
	temp = (*a)->next;
	insert_node_final(&temp, value_temp);
	(*a) = temp;
}

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
