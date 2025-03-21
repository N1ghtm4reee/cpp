CC = c++
FLAGS = -std=c++98 -Wall -Wextra -Werror
SRCS = $(addsuffix .cpp, main HumanA HumanB Weapon)
OBJS = $(SRCS:.cpp=.o)
NAME = human

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

clean :
	@rm -f $(OBJS)

fclean : clean
	@rm -f $(NAME)

re : fclean all

.SECONDARY: $(OBJS)