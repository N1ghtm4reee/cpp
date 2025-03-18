CC = c++
FLAGS = -std=c++98 -Wall -Wextra -Werror
SRCS = megaphone.cpp
OBJS = $(SRCS:.cpp=.o)
NAME = megaphone

all : $(NAME)

$(NAME) : 
	$(CC) $(FLAGS) megaphone.cpp -o $(NAME)

%.o: %.cpp
	$(CC) $(CPPFLAGS) -c $< -o $@

clean :
	@rm -f $(OBJS)

fclean :
	rm $(NAME)

re : fclean all

.SECONDARY: $(OBJS)