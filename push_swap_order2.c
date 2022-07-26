/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_sa_order2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoyano- <jmoyano-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 14:46:53 by jmoyano-          #+#    #+#             */
/*   Updated: 2022/07/26 18:07:27 by jmoyano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
		reverse_rotate(a);
		printf("sa\nrra\n");
	}
	else if (b > c && c < d && b > d)
	{
		rotate(a);
		printf("ra\n");
	}
	else if (b < c && c > d && b < d)
	{
		sa(a);
		rotate(a);
		printf("sa\nra\n");
	}
	else if (b > c && c < d && b < d)
		sa(a);
	else if (b < c && c > d && b > d)
	{
		reverse_rotate(a);
		printf("rra\n");
	}
}
