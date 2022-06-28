/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoyano- <jmoyano-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 09:48:57 by jmoyano-          #+#    #+#             */
/*   Updated: 2022/06/08 18:24:20 by jmoyano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_x_lowerupper(unsigned int i, int *tc, int mayus)
{
	if (i > 15)
		ft_x_lowerupper(i / 16, tc, mayus);
	if (!mayus)
		write(1, &"0123456789abcdef"[i % 16], 1);
	else
		write(1, &"0123456789ABCDEF"[i % 16], 1);
	return (*tc += 1);
}

void	ft_putnbrprintf_fd(unsigned int n, int *tc)
{
	if (n > 9)
		ft_putnbrprintf_fd(n / 10, tc);
	write(1, &"0123456789"[n % 10], 1);
	(*tc) += 1;
}

void	ft_putnbr_d_i(int n, int *tc)
{
	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", 1, tc);
		return ;
	}
	else if (n < 0)
	{
		ft_putchar_fd('-', 1);
		(*tc)++;
		n *= -1;
	}
	if (n > 9)
	{
		ft_putnbr_d_i(n / 10, tc);
		ft_putchar_fd((n % 10) + '0', 1);
		(*tc)++;
	}
	else
	{
		ft_putchar_fd(n + '0', 1);
		(*tc)++;
	}
}

int	hexa_p(unsigned long count, int tc, int bolean)
{
	char	*numbers;

	numbers = "0123456789abcdef";
	if (bolean)
	{
		write(1, "0x", 2);
		tc += 2;
	}
	if (count >= 16)
	{
		tc = hexa_p(count / 16, tc, 0);
		tc = hexa_p(count % 16, tc, 0);
	}
	else
	{
		ft_putchar_fd(numbers[count], 1);
		tc++;
	}
	return (tc);
}
