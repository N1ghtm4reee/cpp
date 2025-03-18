CC = c++
FLAGS = -std=c++98 -Wall -Wextra -Werror
SRCS =  main.cpp AddContact.cpp PhoneUtils.cpp utils.cpp
OBJS = $(SRCS:.cpp=.o)
NAME = Phonebook

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