/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoyano- <jmoyano-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 15:28:58 by jmoyano-          #+#    #+#             */
/*   Updated: 2022/05/09 16:32:29 by jmoyano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	len;

	len = ft_strlen ((char *)str);
	if (str == 0)
		return (0);
	while (len >= 0)
	{
		if (str[len] == (char)c)
		{
			return ((char *)str + len);
		}
		len--;
	}
	return (0);
}
/*
int main()
{
	char  *dst;
	dst = "Soy Jose Moyano";
	
	puts(ft_strrchr(dst, 'e'));

	return 0;
}*/