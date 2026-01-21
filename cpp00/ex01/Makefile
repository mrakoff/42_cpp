CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = phonebook

SRCS = PhoneBook.cpp
OBJS = $(SRCS:.c=.o)

all: $(NAME)

# compilation
$(NAME): $(OBJS)
	$(CXX) $(CFLAGS) $(OBJS) -o $(NAME)

fclean: clean
	rm -f $(NAME)

re: fclean all

party: curl parrot.live

.PHONY: all clean fclean re party