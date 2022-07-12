/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoyano- <jmoyano-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 20:12:28 by jmoyano-          #+#    #+#             */
/*   Updated: 2022/07/12 19:20:56 by jmoyano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdarg.h>
# include <libc.h>
# include <stdio.h>
# include <stdlib.h>	
# include <string.h>
# include <strings.h>
# include "./Moyano_library/libft.h"

typedef struct s_list34 {
	int value;
	struct node* next;
} t_list34;

int		push_swap(int total_arg, char **nums);
int		main(int agrc , char **agrv);
void	num_validation(int total_arg, char **nums);
int		ft_isdigit_pushswap(char *str);
int		ft_atoi(const char *str);
void	push_swap_errors(int c);
void	duplicate_validation(char **nums);

#endif