/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoyano- <jmoyano-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 09:49:36 by jmoyano-          #+#    #+#             */
/*   Updated: 2022/05/04 11:24:05 by jmoyano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	s1len;

	if (!s1 || !set)
		return (NULL);
	while (ft_strchr(set, *s1) && *s1 != '\0')
		s1++;
	s1len = ft_strlen((char *)s1);
	while (ft_strchr(set, s1[s1len]) && s1len != 0)
		s1len--;
	return (ft_substr((char *)s1, 0, s1len + 1));
}
/*
int main(void)
{
	puts (ft_strtrim("hola buenas tardes","holas"));
}*/