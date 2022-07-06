/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoyano- <jmoyano-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 20:12:28 by jmoyano-          #+#    #+#             */
/*   Updated: 2022/07/06 20:19:21 by jmoyano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdarg.h>
# include <libc.h>
# include <stdio.h>
# include <string.h>
# include <strings.h>
# include "./Moyano_library/libft.h"

typedef struct s_list34 {
	int value;
	struct node* next;
} t_list34;

int		push_swap(int total_arg, char **nums);
int		main(int agrc , char **agrv);
int		num_validation(int total_arg, char **nums);

#endif