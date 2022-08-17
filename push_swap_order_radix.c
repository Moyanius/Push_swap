/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_order_radix.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoyano- <jmoyano-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 12:24:21 by jmoyano-          #+#    #+#             */
/*   Updated: 2022/08/17 21:18:57 by jmoyano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_listpush	*get_next_min(t_listpush **stack)
{
	t_listpush	*head;
	t_listpush	*min;
	int			has_min;

	min = NULL;
	has_min = 0;
	head = *stack;
	if (head)
	{
		while (head)
		{
			if ((head->index == -1) && (!has_min || head->value < min->value))
			{
				min = head;
				has_min = 1;
			}
			head = head->next;
		}
	}
	return (min);
}

void	index_stack(t_listpush **stack)
{
	t_listpush	*head;
	int		index;

	index = 0;
	head = get_next_min(stack);
	while (head)
	{
		head->index = index++;
		head = get_next_min(stack);
	}
}

static int	get_max_bits(t_listpush **stack)
{
	t_listpush	*head;
	int			max;
	int			max_bits;

	head = *stack;
	max = head->index;
	max_bits = 0;
	while (head)
	{
		if (head->index > max)
			max = head->index;
		head = head->next;
	}
	while ((max >> max_bits) != 0)
		max_bits++;
	return (max_bits);
}

void	radix_sort(t_listpush **stack_a, t_listpush **stack_b)
{
	t_listpush	*head_a;
	t_listpush	*head_b;
	int			i;
	int			j;
	int			size;
	int			max_bits;

	(void) stack_b;
	i = 0;
	head_a = *stack_a;
	size = lst_len(head_a);
	max_bits = get_max_bits(stack_a);
	while (i < max_bits)
	{
		j = 0;
		while (j++ < size)
		{
			head_a = *stack_a;
			if (((head_a->index >> i) & 1) == 1)
				ra(stack_a);
			else
			{
				pb(stack_a, &head_b);
			}
		}
		while (lst_len(head_b) != 0)
			pa(&head_b, stack_a);
		i++;
	}
}
