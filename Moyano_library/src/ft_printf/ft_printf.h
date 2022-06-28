/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoyano- <jmoyano-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 20:26:36 by jmoyano-          #+#    #+#             */
/*   Updated: 2022/06/06 17:15:16 by jmoyano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <libc.h>
# include <stdio.h>
# include <string.h>
# include <strings.h>
# include "./Libft/libft.h"

int		ft_printf(char const *stri, ...);
int		ft_x_lowerupper(unsigned int i, int *tc, int mayus);
void	ft_putnbrprintf_fd(unsigned int n, int *tc);
void	ft_putnbr_d_i(int n, int *tc);
int		hexa_p(unsigned long count, int tc, int bolean);

#endif