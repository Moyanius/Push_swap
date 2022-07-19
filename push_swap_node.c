/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_node.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoyano- <jmoyano-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 17:05:22 by jmoyano-          #+#    #+#             */
/*   Updated: 2022/07/19 18:21:23 by jmoyano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
int insert_node_final(t_listpush **head, int value)
{
	t_listpush *new;
	t_listpush *tmp;
	
	new = NULL;
	
	tmp = *head;

	new = create_node(value);
	if (new != NULL)
	{
		while (tmp->next != NULL)(tmp = tmp->next);
			{
				new->previous = tmp;
				tmp->next = new;
				return (1);
			}
		
	}
	return (0);
}

int insert_node(t_listpush **a, int argv)
{
	t_listpush *new;

	new = NULL;
	new = create_node(argv);
	if (new != NULL)
	{
		new->next = *a;
		new->previous = NULL;
		if(*a != NULL)
			(*a)->previous = new;
		*a = new;
		return (1);
	}
	return (0);
}

t_listpush *create_node(int nums)
{
	t_listpush *new;

	new = NULL;
	new = (t_listpush*) malloc(sizeof (t_listpush));
	if(new != NULL)
	{
		new->value = nums;
		new->next = NULL;
		new->previous = NULL;	
	}
	return (new);
}