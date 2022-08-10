/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_push_swap.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoyano- <jmoyano-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 19:53:03 by jmoyano-          #+#    #+#             */
/*   Updated: 2022/08/10 11:30:18 by jmoyano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_listpush	*head;
	t_listpush	*a;
	t_listpush	*b;

	a = malloc(sizeof(t_listpush));
	b = malloc(sizeof(t_listpush));
	head = NULL;
	a = NULL;
	b = NULL;
	push_swap(argc, argv, &a, &b);
	return (0);
}
