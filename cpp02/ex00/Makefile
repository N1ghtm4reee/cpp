CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = $(addsuffix .cpp, main Fixed)
OBJS = $(SRCS:.cpp=.o)
NAME = Fixed

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