CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++11
NAME = Unnecessary_Violence

SRCS = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp 
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