# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jmoyano- <jmoyano-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/28 19:34:39 by jmoyano-          #+#    #+#              #
#    Updated: 2022/08/11 11:05:59 by jmoyano-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	push_swap

CC		= gcc

CFLAGS  = -Werror -Wall -Wextra

SRCS	=	push_swap.c \
			main_push_swap.c \
			push_swap_validation.c \
			push_swap_utils.c \
			push_swap_utils2.c \
			push_swap_node.c \
			push_swap_order_push.c \
			push_swap_order_swap.c \
			push_swap_order_rotate.c \
			push_swap_order_reverse_rotate.c \
			push_swap_order_three.c \
			push_swap_order_five.c \
			push_swap_errors.c 



OBJS		=	${SRCS:.c=.o}

$(NAME): $(OBJS)
	make -C ./Moyano_library
	${CC} ${CFLAGS} $(OBJS) -I ./Moyano_library -L ./Moyano_library -l ft -o ${NAME}
	
all: $(NAME)

clean:
	make clean -C ./Moyano_library
	rm -f $(OBJS)

fclean: clean
	make fclean -C ./Moyano_library
	rm -f $(NAME)

re: fclean all

.PHONY:     all clean fclean re