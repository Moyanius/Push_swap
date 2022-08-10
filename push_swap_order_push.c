/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_order_push.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoyano- <jmoyano-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 17:11:33 by jmoyano-          #+#    #+#             */
/*   Updated: 2022/08/10 12:29:06 by jmoyano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_listpush **b, t_listpush **a)
{
	p_stk(b, a);
	printf("PA\n");
}

void	pb(t_listpush **b, t_listpush **a)
{
	p_stk(a, b);
	printf("PB\n");
}
void    p_stk(t_listpush **a, t_listpush **b)
{ 	
	t_listpush *tmp; 
    tmp = NULL;
    if (*b == NULL && *a)
    {
        *b = (t_listpush *)malloc(sizeof(t_listpush));
        (*b)->previous = NULL;
        (*b)->value = (*a)->value;
        (*b)->previous = NULL;
        (*a) = (*a)->next;
        (*a)->previous = NULL;
    }
    else
    {
        if (*a)
        {
            tmp = (t_listpush *)malloc(sizeof(t_listpush));
            tmp->value = (*a)->value;
            tmp->next = NULL;
            tmp->previous = NULL;
            insert_node_first(b, tmp->value);
            (*a) = (*a)->next;
        }
    }
}
