/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoyano- <jmoyano-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 12:12:53 by jmoyano-          #+#    #+#             */
/*   Updated: 2022/05/09 16:22:17 by jmoyano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*result;

	result = 0;
	if ((count == __SIZE_MAX__ && size > 1)
		|| (size == __SIZE_MAX__ && count > 1))
		return (NULL);
	result = malloc(count * size);
	if (!result)
		return (NULL);
	ft_bzero(result, (count * size));
	return (result);
}
/*
int	main(void)
{
	char	s[50];

	strcpy(s, "This is string.h library function");
	puts(s);
	bzero(s, 10);
	puts(s + 9) ;
	return (0);
}*/
