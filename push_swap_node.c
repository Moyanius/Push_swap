/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_node.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoyano- <jmoyano-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 17:05:22 by jmoyano-          #+#    #+#             */
/*   Updated: 2022/08/17 20:58:43 by jmoyano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	insert_node_final(t_listpush **head)
{
	t_listpush	*tmp1;
	t_listpush	*tmp2;

	tmp1 = NULL;
	tmp1 = *head;
	tmp2 = (*head)->previous;
	while(tmp1->next)
		tmp1 = tmp1->next;
	tmp1->next = tmp2;
	tmp1->next->previous = tmp1;
	tmp1->next->next = NULL;
}

void	insert_node_first(t_listpush **head, t_listpush *new)
{
	new->next = (*head);
	new->previous = NULL;
	if((*head) != NULL)
		(*head)->previous = new;
	(*head) = new;
}

int	insert_node(t_listpush **a, int argv)
{
	t_listpush	*new;

	new = NULL;
	new = create_node(argv, -1);
	if (new != NULL)
	{
		new->next = *a;
		new->previous = NULL;
		if (*a != NULL)
			(*a)->previous = new;
		*a = new;
		return (1);
	}
	return (0);
}

t_listpush	*create_node(int nums, int index)
{
	t_listpush	*new;

	new = NULL;
	new = (t_listpush *)malloc(sizeof(t_listpush));
	if (new != NULL)
	{
		new->value = nums;
		new->index = index;
		new->next = NULL;
		new->previous = NULL;
	}
	return (new);
}
