CC = c++
FLAGS = -std=c++98 -Wall -Wextra -Werror
SRCS = $(addsuffix .cpp, main HumanA HumanB Weapon)
OBJS = $(SRCS:.cpp=.o)
NAME = human

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CC) $(CPPFLAGS) -c $< -o $@

clean :
	@rm -f $(OBJS)

fclean : clean
	@rm -f $(NAME)

re : fclean all

.SECONDARY: $(OBJS)