/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_validation.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoyano- <jmoyano-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 20:08:34 by jmoyano-          #+#    #+#             */
/*   Updated: 2022/07/11 18:27:11 by jmoyano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void num_validation(int total_arg, char **nums)
{
	int i;

	(void)nums;
	i = 1;
	while (i < total_arg)
	{
		if (!ft_isdigit_pushswap(nums[i]))
			push_swap_errors(1);
		i++;
	}
}
