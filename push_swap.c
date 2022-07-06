/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoyano- <jmoyano-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 18:59:13 by jmoyano-          #+#    #+#             */
/*   Updated: 2022/07/06 20:22:51 by jmoyano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int push_swap(int total_arg, char **nums)
{
	int i;

	i = 1;

	while (i < total_arg)
		{
			printf("%s\n", nums[i]);
			i++;
			num_validation(total_arg, nums);
		}
	return 0;
}

