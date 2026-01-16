CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++11
NAME = Moar_Brainz

SRCS = main.cpp Zombie.cpp zombieHorde.cpp
# OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

# compilation
$(NAME): $(SRCS)
	$(CXX) $(CXXFLAGS) $(SRCS) -o $(NAME)

fclean: clean
	rm -f $(NAME)

re: fclean all

party: curl parrot.live

.PHONY: all clean fclean re party

#valgrind \ 
# --leak-check=full \
# --show-leak-kinds=all \
# --track-origins=yes \
