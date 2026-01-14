CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++11
NAME = BRAIN

SRCS = main.cpp 
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