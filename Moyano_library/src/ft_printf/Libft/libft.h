/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoyano- <jmoyano-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 16:12:30 by jmoyano-          #+#    #+#             */
/*   Updated: 2022/06/08 18:23:38 by jmoyano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <strings.h>

void		ft_putchar_fd(char c, int fd);
void		ft_putstr_fd(char *s, int fd, int *tc);
size_t		ft_strlen(const char *str);
char		*ft_strchr(const char *str, int c);

#endif
