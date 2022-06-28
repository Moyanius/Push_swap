/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoyano- <jmoyano-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 12:10:26 by jmoyano-          #+#    #+#             */
/*   Updated: 2022/05/09 16:36:25 by jmoyano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	int unsigned	i;
	int				length;

	i = 0;
	length = 0;
	while (src[length])
	{
		length++;
	}
	if (size > 0)
	{
		while (src[i] && i < (size - 1))
		{
		dest[i] = src[i];
		i++;
		}
		dest[i] = '\0';
	}
	return (length);
}
/*
int main(void)
{
	char	dst[50];

	puts(dst);
	ft_strlcpy(dst, "This is string.h library function", 20);
	puts(dst);
	return (0);
}*/