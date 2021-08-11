# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kihkim <kihkim@student.42seoul.kr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/10 20:37:18 by kihkim            #+#    #+#              #
#    Updated: 2021/06/15 17:20:39 by kihkim           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

MLX = -lmlx -lX11 -lXext -lm -lbsd

NAME = push_swap

SRCS			=	main.c \
					srcs/command.c\
					srcs/command2.c\
					srcs/command3.c\
					srcs/util.c\
					srcs/ft_lstnew.c\
					srcs/ft_lstadd_front.c\
					srcs/quick_algo.c\

SRCS_BONUS = 	#srcs/key_press.c \

OBJSRCS = $(SRCS:.c=.o)

$(NAME) : $(OBJSRCS)
	@echo "\033[33m[Remove last version...]"
	@rm -rf Cub3D
	@echo "\033[33m[push_swap compilation...]"
	@gcc $(OBJSRCS) -I./includes -I./usr/include -Wall -Wextra -Werror $(MLX) -o $(NAME)
	@echo "\033[33m[Done !]"

all : $(NAME)

clean :
	rm -rf $(OBJSRCS)

fclean : clean
	rm -rf $(NAME)

re : fclean all

bonus : $(NAME)
