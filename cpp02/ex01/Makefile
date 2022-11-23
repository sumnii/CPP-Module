# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sumsong <sumsong@student.42seoul.kr>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/21 17:12:17 by sumsong           #+#    #+#              #
#    Updated: 2022/11/23 19:22:02 by sumsong          ###   ########seoul.kr   #
#                                                                              #
# **************************************************************************** #

NAME		=	fixed

CXX			=	c++
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98
RM			=	rm -vf

HEADER		=	./
SRC_DIR		=	./
SRC_LIST	=	main.cpp Fixed.cpp
SRCS		=	$(addprefix $(SRC_DIR), $(SRC_LIST))
OBJS		=	$(SRCS:.cpp=.o)

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean
	make all

.cpp.o:
	$(CXX) $(CXXFLAGS) -I $(HEADER) -o $@ -c $<

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -I $(HEADER) -o $@ $(OBJS)

PHONY: all clean fclean re