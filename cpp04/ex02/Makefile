CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
SRC = $(addsuffix .cpp, main Animal Cat Dog WrongCat WrongAnimal Brain)
OBJ = $(SRC:.cpp=.o)
NAME = Animal

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