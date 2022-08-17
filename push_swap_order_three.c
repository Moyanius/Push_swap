/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_order_three.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoyano- <jmoyano-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 14:46:53 by jmoyano-          #+#    #+#             */
/*   Updated: 2022/08/17 19:04:06 by jmoyano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	order_two(t_listpush **a)
{
	if(check_sort(a, 2) == 0)
		sa(a);
}

void	order_three(t_listpush **a)
{
	int	b;
	int	c;
	int	d;

	b = (*a)->value;
	c = (*a)->next->value;
	d = (*a)->next->next->value;
	if (b > c && c > d)
	{
		sa(a);
		rra(a);
	}
	else if (b > c && c < d && b > d)
		ra(a);
	else if (b < c && c > d && b < d)
	{
		sa(a);
		ra(a);
	}
	else if (b > c && c < d && b < d)
		sa(a);
	else if (b < c && c > d && b > d)
		rra(a);
}
