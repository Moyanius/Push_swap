# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jmoyano- <jmoyano-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/28 19:34:39 by jmoyano-          #+#    #+#              #
#    Updated: 2022/07/12 16:23:20 by jmoyano-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	push_swap

CC		= gcc

CFLAGS  = -Werror -Wall -Wextra

SRCS	=	push_swap.c \
			main_push_swap.c \
			push_swap_validation.c \
			push_swap_utils.c \
			push_swap_errors.c 



OBJS		=	${SRCS:.c=.o}

$(NAME): $(OBJS)
	make -C ./Moyano_library
	${CC} ${CFLAGS} $(OBJS) -I./ -o ${NAME}

	
all: $(NAME)

clean:
	make clean -C ./Moyano_library
	rm -f $(OBJS)

fclean: clean
	make fclean -C ./Moyano_library
	rm -f $(NAME)

re: fclean all

.PHONY:     all clean fclean re