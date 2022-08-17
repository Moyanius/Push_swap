/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoyano- <jmoyano-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 20:12:28 by jmoyano-          #+#    #+#             */
/*   Updated: 2022/08/17 20:58:48 by jmoyano-         ###   ########.fr       */
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
	int					index;
	struct s_listpush	*next;
	struct s_listpush	*previous;
	struct s_listpush	*head;
}						t_listpush;

void		index_stack(t_listpush **stack);
void		radix_sort(t_listpush **stack_a, t_listpush **stack_b);

int			push_swap(int total_arg, char **nums,
				t_listpush **a, t_listpush **b);
int			main(int agrc, char **agrv);
void		num_validation(int total_arg, char **nums);
void		int_validation(int total_arg, char **nums);
int			ft_isdigit_pushswap(char *str);
long		ft_atoi_pushswap(const char *str);
void		push_swap_errors(int c);
void		duplicate_validation(char **nums);
int			insert_node(t_listpush **a, int argv);
t_listpush	*create_node(int nums, int index);
void		insert_node_final(t_listpush **head);
void		printlist(t_listpush *list_a, t_listpush *list_b);
void		swap(t_listpush **a);
void		rotate(t_listpush **a);
void		reverse_rotate(t_listpush **a);
void		insert_node_first(t_listpush **head, t_listpush *new);
void		order_two(t_listpush **a);
void		order_three(t_listpush **a);
void		order_five(t_listpush **a, t_listpush **b);
int			order_ok(t_listpush *a);
int			order_check(t_listpush *a, t_listpush *b, char c);
void		order_swap_list(t_listpush *a, t_listpush *b);
int			min_order_five(t_listpush **a);
void		smart_selector(t_listpush **a, int min);
void		smart_selector_a(t_listpush **a, int pvt);
void		smart_selector_b(t_listpush **b, int pvt);
void		free_list(t_listpush **list);
int			search_base(t_listpush *stk, int num, int option);
int			lst_len(t_listpush *a);
void		p_stk(t_listpush **a, t_listpush **b);
long long	ft_atol(const char *str);
int			redond_up(float flt);
t_listpush	*ft_lst_dup(t_listpush *stk);
t_listpush	*list_simulator(t_listpush *list);
int			medium_list(t_listpush *list);
int			check_medium(t_listpush *a, int pvt, int flag);
int			check_sort(t_listpush **a, int len);
int			get_max(t_listpush *list);
void		first_sort(t_listpush **a, t_listpush **b, int len);
void		second_sort(t_listpush **a, t_listpush **b, int len);
void		third_sort(t_listpush **a, t_listpush **b, int max);
void		sort_bigger(t_listpush **a, t_listpush **b, int len);
int			ft_lstnbr(t_listpush **list, int idx);
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