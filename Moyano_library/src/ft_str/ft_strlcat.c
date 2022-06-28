/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoyano- <jmoyano-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 12:36:03 by jmoyano-          #+#    #+#             */
/*   Updated: 2022/05/09 16:23:11 by jmoyano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	m;
	size_t	c;

	i = 0;
	c = ft_strlen(src);
	m = ft_strlen(dest);
	while (src[i] && (m + i + 1 < size))
	{
		dest[m + i] = src[i];
		i++;
	}
	dest[m + i] = '\0';
	if (size > m)
		return (m + c);
	else
		return (c + size);
}

/*  int main(void)
{
	char dest[30]; memset(dest, 0, 30);
	char *src = (char *)"AAAAAAAAA";

	printf("%zu",ft_strlcat(dest, src, 6));

	return (0);
}  */
