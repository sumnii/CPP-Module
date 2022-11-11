NAME		=	zombie

CC			=	c++
CFLAGS		=	-Wall -Wextra -Werror -std=c++98
RM			=	rm -f

HEADER		=	./
SRC_DIR		=	./
SRC_LIST	=	main.cpp Zombie.cpp newZombie.cpp randomChump.cpp
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