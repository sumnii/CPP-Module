# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sumsong <sumsong@student.42seoul.kr>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/21 17:11:51 by sumsong           #+#    #+#              #
#    Updated: 2022/11/21 17:11:51 by sumsong          ###   ########seoul.kr   #
#                                                                              #
# **************************************************************************** #

NAME		=	violence

CC			=	c++
CFLAGS		=	-Wall -Wextra -Werror -std=c++98 -pedantic-errors
RM			=	rm -f

HEADER		=	./
SRC_DIR		=	./
SRC_LIST	=	main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
SRC			=	$(addprefix $(SRC_DIR), $(SRC_LIST))
OBJ			=	$(SRC:.cpp=.o)

all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.cpp.o:
	$(CC) $(CFLAGS) -I $(HEADER) -o $@ -c $<

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -I $(HEADER) -o $@ $(OBJ)

PHONY: all clean fclean re