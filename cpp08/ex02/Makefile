NAME		=	mutant

CXX			=	c++
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98 -pedantic-errors
RM			=	rm -vf

HEADER		=	./
SRC_DIR		=	./
SRC_LIST	=	main.cpp
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