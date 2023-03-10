# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vicgarci <vicgarci@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/17 14:56:53 by vicgarci          #+#    #+#              #
#    Updated: 2023/03/10 16:59:40 by vicgarci         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
LIBFT = libft_def/libftprintf.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror -D TESTER=1#-fsanitize=address -g3
RM = rm -f

BLACK = \033[0;30m
RED =   \033[0;31m
GREEN = \033[0;32m
YELLOW =    \033[0;33m
BLUE  = \033[0;34m
MAGENTA =   \033[0;35m
CYAN =  \033[0;36m
LGRAY = \033[0;37m
DGRAY = \033[1;30m
LBLUE = \033[1;34m
LGREEN = \033[1;32m
LCYAN = \033[1;36m
LRED = \033[1;31m
LMAGENTA =\033[1;35m
LYELLOW = \033[1;33m
WHITE = \033[1;37m
RESET = \033[0m

FILES = src/main.c \
		src/push_swap_tester.c \
		src/stack_orders/ft_swap_stack.c \
		src/stack_orders/ft_push_stack.c \
		src/stack_orders/ft_rotate_stack.c \
		src/stack_orders/ft_reverse_rotate_stack.c \
		src/testers/swap_tester.c \
		src/testers/push_tester.c \
		src/testers/rotate_tester.c \
		src/testers/reverse_rotate_tester.c \
		src/testers/ft_test_output.c \

OBJS = ${FILES:.c=.o}

all: libft $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $(LIBFT) $(OBJS) -o $(NAME)
	@echo "$(LBLUE)\n$(NAME) compilado con éxito\n$(RESET)"

clean:
	$(RM) $(OBJS)
	$(MAKE) clean -C ./libft_def

fclean: clean
	$(MAKE) fclean -C ./libft_def
	$(RM) $(NAME) $(MLX42)


re: fclean libft mlx43 $(NAME)

libft:
	$(MAKE) -C ./libft_def

.PHONY: all clean fclean re libft mlx43
