# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amurakho <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/09/14 19:09:50 by amurakho          #+#    #+#              #
#    Updated: 2018/09/14 19:09:51 by amurakho         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = lem-in

SRCS := src/main.c \
		src/all_digit.c \
		src/all_ways.c \
		src/best_ways.c \
		src/del_ways.c \
		src/errors.c \
		src/fill_room_link.c \
		src/kill.c \
		src/make_re.c \
		src/make_st_en.c \
		src/parse_line.c \
		src/print.c \
		src/make_struct.c \
		src/new_part_turn.c 

FLAGS = -Wall -Werror -Wextra -I./inc

OBJ = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	make -C libft
	gcc -o $(NAME) $(FLAGS) $(OBJ) libft/libft.a

clean:
	make clean -C libft
	rm -f $(OBJ)

fclean: clean
	make fclean -C libft
	rm -f $(NAME)

re: fclean all
