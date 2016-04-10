#* ************************************************************************** *#
#*                                                                            *#
#*                                                        :::      ::::::::   *#
#*   Makefile                                           :+:      :+:    :+:   *#
#*                                                    +:+ +:+         +:+     *#
#*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        *#
#*                                                +#+#+#+#+#+   +#+           *#
#*   Created: 2016/03/08 23:29:46 by vquesnel          #+#    #+#             *#
#*   Updated: 2016/03/23 00:36:47 by vquesnel         ###   ########.fr       *#
#*                                                                            *#
#* ************************************************************************** *#

NAME = fillit

SRCS =	srcs/main.c srcs/solver.c srcs/tests.c srcs/tools.c \
		srcs/tetriminos_handling.c srcs/form_pack1.c srcs/form_pack2.c \
		srcs/is_forms.c

OBJS = $(SRCS:.c=.o)
INCLUDES =-I libft -I includes
LIBS = -L libft/ -lft
FLAGS = -Wall -Wextra -Werror

$(NAME):	$(OBJS)
	@make -C libft/ re
	@gcc -o $(NAME) $(OBJS) $(LIBS)
	@echo "\033[32;1mComplitation ok\033[0m"

$(OBJS): %.o: %.c
	@gcc $(FLAGS) $(INCLUDES) -c $< -o $@

all:		$(NAME)

clean:
	rm -f	$(OBJS)

fclean: clean
	rm -f	$(NAME)
	@make -C libft/ fclean

re: fclean all

.PHONY: all clean fclean re
