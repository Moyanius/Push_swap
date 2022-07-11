/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoyano- <jmoyano-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 18:59:13 by jmoyano-          #+#    #+#             */
/*   Updated: 2022/07/11 18:29:11 by jmoyano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int push_swap(int total_arg, char **nums)
{
	int i;

	i = 1;
	num_validation(total_arg, nums);

	while (i < total_arg)
	{
		printf("%s\n", nums[i]);
		i++;
	}
	return 0;
}

