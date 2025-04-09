CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
SRC = $(addsuffix .cpp, main ClapTrap ScavTrap FragTrap)
OBJ = $(SRC:.cpp=.o)
NAME = FragTrap

all : $(NAME)

$(NAME) : $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

clean :
	@rm -f $(OBJ)
fclean : clean
	@rm -f $(NAME)
re : fclean all

.secondary : $(OBJ)