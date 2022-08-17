/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_order_100.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoyano- <jmoyano-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 16:56:57 by jmoyano-          #+#    #+#             */
/*   Updated: 2022/08/17 19:27:58 by jmoyano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	first_sort(t_listpush **a, t_listpush **b, int len)
{
	int		i;
	int		pvt;
	t_listpush	*tmp1;
	t_listpush	*tmp2;

	i = len;
	while (i > redond_up(len / 2))
	{
		tmp1 = ft_lst_dup(*a);
		pvt = medium_list(tmp1);
		while (check_medium((*a), pvt, 1) && (*a))
		{
			if ((*a)->value <= pvt)
			{
				tmp2 = *a;
				pb(b, a);
				i--;
				free(tmp2);
			}
			else
				smart_selector_a(a, pvt);
		}
		free_list(&tmp1);
	}
}


void	second_sort(t_listpush **a, t_listpush **b, int len)
{
	int		min;
	t_listpush	*tmp;

	tmp = NULL;
	while (*a && !check_sort(a, len))
	{
		min = min_order_five(a);
		tmp = (*a)->next;
		while ((*a)->value != min && tmp && tmp->value == min)
			sa(a);
		while (lst_len(*a) && check_medium((*a), min, 1))
		{
			if ((*a)->value == min)
			{
				tmp = *a;
				pb(b, a);
				free(tmp);
				len--;
			}
			else
				smart_selector_a(a, min);
		}
	}
}


void	third_sort(t_listpush **a, t_listpush **b, int max)
{
	t_listpush	*tmp;

	tmp = NULL;
	while (*b)
	{
		max = get_max(*b);
		while (check_medium((*b), max, 2))
		{
			max = get_max(*b);
			tmp = (*b)->next;
			while (((*b)->value != max) && tmp && (tmp->value == max))
				sb(b);
			while (((*b)->value != max) && *b)
				smart_selector_b(b, max);
			while (*b && (*b)->value == max)
			{
				tmp = *b;
				pa(b, a);
				max = get_max(*b);
				free(tmp);
			}
		}
	}
}

void	sort_bigger(t_listpush **a, t_listpush **b, int len)
{
	int	max;

	max = 0;
	first_sort(a, b, len);
	second_sort(a, b, len);
	third_sort(a, b, max);
	free_list(a);
	free_list(b);
}
