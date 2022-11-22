# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sumsong <sumsong@student.42seoul.kr>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/21 17:12:12 by sumsong           #+#    #+#              #
#    Updated: 2022/11/22 19:59:07 by sumsong          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	fixed

CC			=	c++
CFLAGS		=	-Wall -Wextra -Werror -std=c++98
RM			=	rm -vf

HEADER		=	./
SRC_DIR		=	./
SRC_LIST	=	main.cpp Fixed.cpp
SRC			=	$(addprefix $(SRC_DIR), $(SRC_LIST))
OBJ			=	$(SRC:.cpp=.o)

all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean
	make all

.cpp.o:
	$(CC) $(CFLAGS) -I $(HEADER) -o $@ -c $<

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -I $(HEADER) -o $@ $(OBJ)

PHONY: all clean fclean re