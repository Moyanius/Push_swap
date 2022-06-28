# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jmoyano- <jmoyano-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/23 11:00:54 by jmoyano-           #+#    #+#              #
#    Updated: 2022/05/25 18:46:46 by jmoyano-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Este es el Makefile correspondiente a la práctica LIBFT
# José Moyano Jiménez

NAME    =   libft.a

SRCS    = 	ft_putchar_fd.c \
			ft_putstr_fd.c \
			ft_strchr.c \
			ft_strlen.c

		   
OBJS		=	${SRCS:.c=.o}


FLAGS		= -Wall -Wextra -Werror

$(NAME):
	gcc $(FLAGS) -c $(SRCS) -I./
	ar rcs $(NAME) $(OBJS)


all: $(NAME)

clean:
	rm -f $(OBJS) $(BONUS_OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY:     all clean fclean re
