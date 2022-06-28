/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoyano- <jmoyano-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 17:17:10 by jmoyano-          #+#    #+#             */
/*   Updated: 2022/04/26 12:26:18 by jmoyano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*ptr;
	const unsigned char	*ptr2;

	if (dst == NULL && src == NULL)
		return (0);
	ptr = (unsigned char *) dst;
	ptr2 = (unsigned char *) src;
	while (n-- > 0)
		*(ptr++) = *(ptr2++);
	return (dst);
}
/*
int	main(void)
{
	char	dst[50];

	puts(dst);
	ft_memcpy(dst, "This is string.h library function", 10);
	puts(dst);
	return (0);
}*/