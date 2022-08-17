/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils4.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoyano- <jmoyano-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 17:54:46 by jmoyano-          #+#    #+#             */
/*   Updated: 2022/08/17 19:19:25 by jmoyano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	smart_selector_a(t_listpush **a, int pvt)
{
	int	i;
	int	num;

	i = search_base((*a), pvt, 1);
	num = (lst_len(*a) / 2);
	if (num > i)
		ra(a);
	else
		rra(a);
}

void	smart_selector_b(t_listpush **b, int pvt)
{
	int	i;
	int	num;

	i = search_base((*b), pvt, 1);
	num = (lst_len(*b) / 2);
	if (num > i)
		rb(b);
	else
		rrb(b);
}

void	free_list(t_listpush **list)
{
	t_listpush	*tmp;

	if (*list)
	{
		while (*list)
		{
			tmp = (*list)->next;
			free(*list);
			*list = NULL;
			(*list) = tmp;
		}
		free(*list);
		*list = NULL;
	}
}

int	check_sort(t_listpush **a, int len)
{
	t_listpush	*tmp;

	if (lst_len(*a) != len)
		return (0);
	tmp = *a;
	while (tmp && tmp->next)
	{
		if ((tmp)->next != NULL && ((tmp)->value < (tmp)->next->value))
			(tmp) = tmp->next;
		else
			return (0);
	}
	return (1);
}

int	ft_lstnbr(t_listpush **list, int idx)
{
	t_listpush	*tmp;
	int		i;

	i = 0;
	tmp = *list;
	while (tmp != NULL)
	{
		if (i == idx)
			return (tmp->value);
		i++;
		tmp = tmp->next;
	}
	return (1);
}