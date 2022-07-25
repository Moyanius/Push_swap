/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_order2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoyano- <jmoyano-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 14:46:53 by jmoyano-          #+#    #+#             */
/*   Updated: 2022/07/25 19:25:21 by jmoyano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void order_three(t_listpush **a)
{
    int b;
    int c;
    int d;

    b = (*a)->value;
    c = (*a)->next->value;
    d = (*a)->next->next->value;

    if (b > c && c > d)
    {
        swap(a);
        reverse_rotate(a);
    }
   if (b > c && c < d)
    {
        rotate(a);
    }

}
