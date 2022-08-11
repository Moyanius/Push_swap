/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_order_radix.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoyano- <jmoyano-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 12:24:21 by jmoyano-          #+#    #+#             */
/*   Updated: 2022/08/11 13:01:45 by jmoyano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	order_radix(t_listpush **a, t_listpush **b, int max_len, int right_shift)
{
	int	i;
	int	len;
	int	limit;

	if (right_shift > max_len || order_ok(*a))
	{
		while (lst_len(*b))
			pb(a, b);
		return (0);
	}
	i = -1;
	len = lst_len(*a);
	limit = order_check(*a, *b, 'a');
	while (++i < len - limit && !order_ok(*a))
	{
		if (!((*a)->value >> right_shift & 1))
			pa(b, a);
		else
			ra(a);
	}
	i = -1;
	len = lst_len(*b);
	while (++i < len - order_check(*a, *b, 'b'))
		pb(a, b);
	return (order_radix(a, b, max_len, right_shift + 1));
}
