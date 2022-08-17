/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoyano- <jmoyano-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 18:59:13 by jmoyano-          #+#    #+#             */
/*   Updated: 2022/08/17 19:49:48 by jmoyano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	push_swap(int total_arg, char **nums, t_listpush **a, t_listpush **b)
{
	int	i;

	i = total_arg;
	num_validation(total_arg, nums);
	duplicate_validation(nums);
	int_validation(total_arg, nums);
	while (i > 1)
	{
		insert_node(a, atoi(nums[i - 1]));
		i--;
	}
	index_stack(a);
	//printlist(*a, *b);
	if (lst_len(*a) == 2)
		order_two(a);
	else if(lst_len(*a) == 3)
		order_three(a);
	else if(lst_len(*a) == 5)
		order_five(a, b);
	else
		radix_sort(a, b);
	//printlist(*a, *b);
	return (0);
}

void	printlist(t_listpush *list_a, t_listpush *list_b)
{
	int	a;
	int	b;

	while (list_a || list_b)
	{
		if (list_a)
		{
			if (list_a)
				a = list_a->value;
			list_a = list_a->next;
		}
		else
			a = 0;
		if (list_b)
		{
			if (list_b)
				b = list_b->value;
			list_b = list_b->next;
		}
		else
			b = 0;
		printf(" %d     %d \n", a, b);
	}
	printf("---------\n A     B \n\n");
}
