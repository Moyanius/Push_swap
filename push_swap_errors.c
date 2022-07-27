/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_errors.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoyano- <jmoyano-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 17:54:39 by jmoyano-          #+#    #+#             */
/*   Updated: 2022/07/27 17:22:45 by jmoyano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_swap_errors(int c)
{
	if (c == 1)
	{
		printf("Has introducido un caracter no numerico");
		exit(1);
	}
	if (c == 2)
	{
		printf("Has introducido dos numeros iguales");
		exit(2);
	}
	if (c == 3)
	{
		printf("has introducido un entero fuera de su rango mínimo o máximo");
		exit(3);
	}
}
