/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_validation.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoyano- <jmoyano-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 20:08:34 by jmoyano-          #+#    #+#             */
/*   Updated: 2022/08/17 18:59:09 by jmoyano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	num_validation(int total_arg, char **nums)
{
	int	i;

	(void)nums;
	i = 1;
	while (i < total_arg)
	{
		if (!ft_isdigit_pushswap(nums[i]))
			push_swap_errors(1);
		i++;
	}
}

void	duplicate_validation(char **nums)
{
	int	i;
	int	j;

	j = 1;
	while (nums[j])
	{
		i = j + 1;
		while (nums[i])
		{
			if (ft_atoi_pushswap(nums[j]) == ft_atoi_pushswap(nums[i]))
				push_swap_errors(2);
			i++;
		}
		j++;
	}
}

void	int_validation(int total_arg, char **nums)
{
	long	i;

	(void)nums;
	i = 1;
	while (i < total_arg)
	{
		if (!(ft_atol(nums[i]) >= INT_MIN && ft_atol(nums[i]) <= INT_MAX))
			push_swap_errors(3);
		i++;
	}
}
