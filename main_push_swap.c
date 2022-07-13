/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_push_swap.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoyano- <jmoyano-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 19:53:03 by jmoyano-          #+#    #+#             */
/*   Updated: 2022/07/06 20:24:17 by jmoyano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc , char **argv)
{
	t_listpush *head;

	push_swap(argc, argv, &head);
	return 0;
}

void print_list(t_listpush *head)
{
	t_listpush *tmp;

	tmp = head;
	while (tmp->next)
	{
	printf("%d\n", tmp->value);
		tmp = tmp->next;
	}
}