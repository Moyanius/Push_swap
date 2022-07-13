/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_node.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoyano- <jmoyano-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 17:05:22 by jmoyano-          #+#    #+#             */
/*   Updated: 2022/07/13 18:43:34 by jmoyano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int insert_node_first(t_listpush **head, int argv)
{
	t_listpush *new;

	new = create_node(argv);
	if (!new)
	{
		new->next = *head;
		new->previous = NULL;
		if(*head != NULL)
			(*head)->previous = new;
		*head = new;
		return (1);
	}
	return (0);
}

t_listpush *create_node(int nums)
{
	t_listpush *new;

	new = (t_listpush*) malloc(sizeof (t_listpush));
	if(!new)
	{
		new->value = nums;
		new->next = NULL;
		new->previous = NULL;
	}
	return (new);
}