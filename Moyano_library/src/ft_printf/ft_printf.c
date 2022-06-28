/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoyano- <jmoyano-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 18:08:58 by jmoyano-          #+#    #+#             */
/*   Updated: 2022/06/08 18:38:30 by jmoyano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_select(char const *stri, va_list	lista, int *tc)
{
	if (*stri == 'c')
	{
		ft_putchar_fd(va_arg(lista, int), 1);
		(*tc)++;
	}
	else if (*stri == 's')
		ft_putstr_fd(va_arg(lista, char *), 1, tc);
	else if (*stri == 'd' || *stri == 'i')
		ft_putnbr_d_i(va_arg(lista, int), tc);
	else if (*stri == 'x')
		ft_x_lowerupper(va_arg(lista, unsigned int ), tc, 0);
	else if (*stri == 'X')
		ft_x_lowerupper(va_arg(lista, unsigned int ), tc, 1);
	else if (*stri == '%')
	{
		ft_putchar_fd('%', 1);
		(*tc)++;
	}
	else if (*stri == 'u')
		ft_putnbrprintf_fd(va_arg(lista, int), tc);
	else if (*stri == 'p')
		*tc = hexa_p(va_arg(lista, unsigned long), *tc, 1);
}

int	ft_printf(char const *stri, ...)
{
	int		tc;
	va_list	lista;

	tc = 0;
	va_start(lista, stri);
	while (*stri)
	{
		if (*stri == '%')
		{
			stri++;
			ft_select(stri, lista, &tc);
			stri++;
		}
		else
		{
			ft_putchar_fd(*stri, 1);
			tc++;
			stri++;
		}
	}
	va_end(lista);
	return (tc);
}
