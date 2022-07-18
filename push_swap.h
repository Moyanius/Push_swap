/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoyano- <jmoyano-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 20:12:28 by jmoyano-          #+#    #+#             */
/*   Updated: 2022/07/13 18:44:53 by jmoyano-         ###   ########.fr       */
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
# include <stddef.h>
# include <ctype.h>
# include "./Moyano_library/libft.h"

typedef struct s_listpush {
	int value;
	struct s_listpush *next;
	struct s_listpush *previous;
} t_listpush;

int			push_swap(int total_arg, char **nums,  t_listpush **head);
int			main(int agrc , char **agrv);
void		num_validation(int total_arg, char **nums);
int			ft_isdigit_pushswap(char *str);
int			ft_atoi(const char *str);
void		push_swap_errors(int c);
void		duplicate_validation(char **nums);
int			insert_node_first(t_listpush **head, int argv);
t_listpush	*create_node(int nums);
void		print_list(t_listpush *head);
int			insert_node_final(t_listpush **head, int value);


#endif