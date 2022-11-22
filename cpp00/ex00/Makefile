# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sumsong <sumsong@student.42seoul.kr>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/21 17:09:54 by sumsong           #+#    #+#              #
#    Updated: 2022/11/22 19:50:48 by sumsong          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	megaphone

CC			=	c++
CFLAGS		=	-Wall -Wextra -Werror -std=c++98
RM			=	rm -vf

HEADER		=	./
SRC_DIR		=	./
SRC_LIST	=	megaphone.cpp
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