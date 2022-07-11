/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_validation.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoyano- <jmoyano-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 20:08:34 by jmoyano-          #+#    #+#             */
/*   Updated: 2022/07/11 18:05:58 by jmoyano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void num_validation(int total_arg, char **nums)
{
	int i;

	i = 0;
	while (i < total_arg)
	{
		if(ft_atoi(nums[i]))
			i++;
		else
		{
			push_swap_errors(1);
		}
	}
}
