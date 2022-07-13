/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoyano- <jmoyano-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 18:59:13 by jmoyano-          #+#    #+#             */
/*   Updated: 2022/07/12 18:04:39 by jmoyano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int push_swap(int total_arg, char **nums,  t_listpush **head)
{
	int i;

	i = 1;
	num_validation(total_arg, nums);
	duplicate_validation(nums);
	insert_node_first(head, atoi(nums[1]));

	print_list(*head);
	
	return 0;
}

