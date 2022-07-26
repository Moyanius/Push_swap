/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_order_swap.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoyano- <jmoyano-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 17:11:33 by jmoyano-          #+#    #+#             */
/*   Updated: 2022/07/26 19:46:06 by jmoyano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_listpush **a)
{
	int	temp;

	if ((*a) && (*a)->next)
	{
		temp = (*a)->value;
		(*a)->value = (*a)->next->value;
		(*a)->next->value = temp;
	}
}

void	sa(t_listpush **list_a)
{
	swap(list_a);
	printf("SA\n");
}

void	sb(t_listpush **list_b)
{
	swap(list_b);
	printf("SB\n");
}

void	ss(t_listpush **list_a, t_listpush **list_b)
{
	swap(list_a);
	swap(list_b);
	printf("SS\n");
}
