/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_order_five.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoyano- <jmoyano-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 14:46:53 by jmoyano-          #+#    #+#             */
/*   Updated: 2022/08/09 13:29:24 by jmoyano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	order_five(t_listpush **a, t_listpush **b, int leng)
{
	int length;
	int min;
	t_listpush *tmp_a;

	length = leng;
	while(length > 3 && length <=  5)
		{
			min = min_order_five(a);
			tmp_a = (*a)->next;
			if((((*a)->value) != min) && tmp_a && (tmp_a->value == min))
				sa(a);
				pb(b, a);

		}
}
