CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++11
NAME = ex00

SRCS = main.cpp ClapTrap.cpp
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

#test cases
# test: test1 test2

#test1 test2 test3 test4 test5 

# test1: all
# 	./$(NAME)
# 	@echo ""
# 	@echo "\033[32m************* EXPECTED OUTPUT: *************\033[0m"
# 	@echo "0\n0.00390625\n0.00390625\n0.00390625\n0.0078125\n10.1016\n10.1016"

# test2: all
# 	./$(NAME)
# 	@echo ""
# 	@echo "\033[32m************* EXPECTED OUTPUT: *************\033[0m"
# 	@echo "12\n0.125\n11.9961\n11.9961\n0.125\n12\n0\n1\n1.5\n96\n11.875\n12.125\n1\n0\n0\n1"

# test3: all
# 	@echo "\033[32m************ WARNING LEVEL ************\033[0m"
# 	./$(NAME) "WARNING"
# 	@echo " "

# test4: all
# 	@echo "\033[32m************* ERROR LEVEL *************\033[0m"
# 	./$(NAME) "ERROR"
# 	@echo " "

# test5: all
# 	@echo "\033[32m************* WRONG INPUT *************\033[0m"
# 	./$(NAME) "AAAAARGH"
# 	@echo " "

.PHONY: all clean fclean re # test1 test2