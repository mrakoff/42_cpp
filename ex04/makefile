CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++11
NAME = Sed_is_for_losers

SRCS = main.cpp
OBJDIR = obj
OBJS = $(SRCS:%.cpp=$(OBJDIR)/%.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

$(OBJDIR)/%.o: %.cpp | $(OBJDIR)
	@$(CXX) $(CXXFLAGS) -c $< -o $@

$(OBJDIR):
	@mkdir -p $(OBJDIR)

clean:
	rm -rf $(OBJDIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

# test cases
test: test1 test2 test3

test1: all
	./$(NAME) test1 test meow
	@echo "\033[32mTest 1 completed!\n\033[0m"

test2: all
	./$(NAME) test2 test quack
	@echo "\033[32mTest 2 completed!\n\033[0m"

test3: all
	./$(NAME) test3 test sleep
	@echo "\033[32mTest 3 completed!\n\033[0m"

.PHONY: all clean fclean re test