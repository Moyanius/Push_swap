/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoyano- <jmoyano-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 17:07:22 by jmoyano-          #+#    #+#             */
/*   Updated: 2022/05/09 16:31:14 by jmoyano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *string1)
{
	char	*d;
	char	*p_string1;
	size_t	i;

	p_string1 = (char *) string1;
	i = 0;
	d = (char *) malloc(sizeof(char) * (ft_strlen (p_string1) + 1));
	if (d == NULL)
		return (NULL);
	while (p_string1[i] != '\0')
	{
		d[i] = p_string1[i];
		i++;
	}
	d[i] = '\0';
	return (d);
}
/*
int	main(void)
{
	char	s[50];

	strcpy(s, "This is string.h library function");
	puts(s);
	bzero(s, 50);
	puts(s + 9) ;
	return (0);
}*/
