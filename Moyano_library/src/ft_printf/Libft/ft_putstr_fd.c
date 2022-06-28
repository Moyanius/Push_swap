/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoyano- <jmoyano-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 15:11:35 by jmoyano-          #+#    #+#             */
/*   Updated: 2022/06/08 18:38:07 by jmoyano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd, int *tc)
{
	if (!s)
	{
		write (1, "(null)", 6);
		*tc += 6;
		return ;
	}
	write (fd, s, ft_strlen(s));
	*tc += ft_strlen(s);
}
