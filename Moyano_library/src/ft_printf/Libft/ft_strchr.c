/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoyano- <jmoyano-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 12:15:00 by jmoyano-          #+#    #+#             */
/*   Updated: 2022/05/09 16:23:12 by jmoyano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	while (*str)
	{
		if (*str == (char)c)
		{
			return ((char *)str);
		}
		str++;
	}
	if (c == '\0')
		return ((char *)str);
	return (0);
}
/*
#include <string.h>
int main()
{
	char  *dst;
	dst = "tripouille";
	
	printf("%s", dst + strlen(dst));
	//puts(ft_strchr(dst, 0));
	
	return 0;
}*/