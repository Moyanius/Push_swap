/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoyano- <jmoyano-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 09:23:44 by jmoyano-          #+#    #+#             */
/*   Updated: 2022/04/26 13:05:53 by jmoyano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*ptr;
	const unsigned char	*ptr2;

	ptr = (unsigned char *) dest;
	ptr2 = (unsigned char *) src;
	i = 0;
	if (dest == NULL && src == NULL)
		return (0);
	if (ptr2 < ptr)
		while (++i <= len)
			ptr[len - i] = ptr2[len - i];
	else
		while (len-- > 0)
			*(ptr++) = *(ptr2++);
	return (dest);
}
/*
int main(void)
{
	char	dst[50];

	puts(dst);
	ft_memmove(dst, "This is string.h library function", 10);
	puts(dst);
	return (0);
}*/