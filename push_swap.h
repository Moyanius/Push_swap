/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoyano- <jmoyano-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 20:12:28 by jmoyano-          #+#    #+#             */
/*   Updated: 2022/07/27 17:58:22 by jmoyano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "./Moyano_library/libft.h"
# include <ctype.h>
# include <libc.h>
# include <stdarg.h>
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <strings.h>

typedef struct s_listpush
{
	int					value;
	struct s_listpush	*next;
	struct s_listpush	*previous;
	struct s_listpush	*head;
}						t_listpush;

int			push_swap(int total_arg, char **nums,
				t_listpush **a, t_listpush **b);
int			main(int agrc, char **agrv);
void		num_validation(int total_arg, char **nums);
int			ft_isdigit_pushswap(char *str);
long		ft_atoi_pushswap(const char *str);
void		push_swap_errors(int c);
void		duplicate_validation(char **nums);
int			insert_node(t_listpush **a, int argv);
t_listpush	*create_node(int nums);
int			insert_node_final(t_listpush **head, int value);
void		printlist(t_listpush *list_a, t_listpush *list_b);
void		swap(t_listpush **a);
void		rotate(t_listpush **a);
void		reverse_rotate(t_listpush **a);
int			insert_node_first(t_listpush **head, int value);
void		order_three(t_listpush **a);
void		sa(t_listpush **list_a);
void		sb(t_listpush **list_b);
void		ss(t_listpush **list_a, t_listpush **list_b);
void		pa(t_listpush **b, t_listpush **a);
void		pb(t_listpush **b, t_listpush **a);
void		ra(t_listpush **list_a);
void		rb(t_listpush **list_b);
void		rr(t_listpush **list_a, t_listpush **list_b);
void		rra(t_listpush **list_a);
void		rrb(t_listpush **list_b);
void		rrr(t_listpush **list_a, t_listpush **list_b);

#endif