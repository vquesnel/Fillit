#* ************************************************************************** *#
#*                                                                            *#
#*                                                        :::      ::::::::   *#
#*   Makefile                                           :+:      :+:    :+:   *#
#*                                                    +:+ +:+         +:+     *#
#*   By: vquesnel <vquesnel@student.42.fr>          +#+  +:+       +#+        *#
#*                                                +#+#+#+#+#+   +#+           *#
#*   Created: 2016/03/08 23:29:46 by vquesnel          #+#    #+#             *#
#*   Updated: 2016/03/25 17:02:56 by vquesnel         ###   ########.fr       *#
#*                                                                            *#
#* ************************************************************************** *#

NAME = fillit

SRCS = srcs/main.c srcs/solver.c srcs/tests.c \
	   srcs/tools.c srcs/tetriminos_handling.c srcs/form_pack1.c srcs/form_pack2.c \
	   srcs/is_forms.c

OBJS = $(SRCS:.c=.o)
INCLUDES =-I libft -I includes
LIBS = -L libft/ -lft
FLAGS = -Wall -Wextra -Werror

$(NAME):	$(OBJS)
	@make -C libft/
	@gcc -o $(NAME) $(OBJS) $(LIBS)
	@echo "\033[33;32mFillit has been created"

$(OBJS): %.o: %.c
	@gcc $(FLAGS) $(INCLUDES) -c $< -o $@

all:		$(NAME)

clean:
	@make -C libft/ clean
	@rm -f	$(OBJS)
	@echo "\033[33;34mall fillit_files.o are deleted"

fclean: clean
	@rm -f	$(NAME)
	@make -C libft/ fclean
	@echo "\033[33;31m$(NAME) is deleted"

re: fclean all

.PHONY: all clean fclean re
