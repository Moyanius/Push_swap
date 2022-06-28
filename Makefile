# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jmoyano- <jmoyano-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/28 19:34:39 by jmoyano-          #+#    #+#              #
#    Updated: 2022/06/28 19:42:18 by jmoyano-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	push_swap.a

SRCS	=	ft_printf.c \
			ft_printf_utils.c

OBJS		=	${SRCS:.c=.o}

CFLAGS		= -Wall -Wextra -Werror

$(NAME):
	make -C ./Moyano_library
	cp Moyano_library/push_swap.a $(NAME)
	gcc $(CFLAGS) -c $(SRCS) -I./
	ar rcs $(NAME) $(OBJS)

	
all: $(NAME)

clean:
	make clean -C ./Moyano_library
	rm -f $(OBJS)

fclean: clean
	make fclean -C ./Moyano_library
	rm -f $(NAME)

re: fclean all

.PHONY:     all clean fclean re