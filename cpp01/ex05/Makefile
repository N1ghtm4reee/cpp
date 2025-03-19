CC = c++
FLAGS = -std=c++98 -Wall -Wextra -Werror
SRCS = $(addsuffix .cpp, main Harl)
OBJS = $(SRCS:.cpp=.o)
NAME = Harl

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