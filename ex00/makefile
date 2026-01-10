CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = BraiiiiiiinnnzzzZ

SRCS = main.cpp Zombie.cpp randomChump.cpp 
OBJS = $(SRCS:.c=.o)

all: $(NAME)

# compilation
$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

fclean: clean
	rm -f $(NAME)

re: fclean all

party: curl parrot.live

.PHONY: all clean fclean re party