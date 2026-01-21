CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++11
NAME = ex00

SRCS = main.cpp Fixed.cpp
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
test: test1 
#test2 test3 test4 test5 

test1: all
	./$(NAME)
	@echo ""
	@echo "\033[32m************* EXPECTED OUTPUT: *************\033[0m"
	@echo "Default constructor called\nCopy constructor called\nCopy assignment operator called <-- This line may be missing depending on your implementation\ngetRawBits member function called\nDefault constructor called\nCopy assignment operator called\ngetRawBits member function called\ngetRawBits member function called\n0\ngetRawBits member function called\n0\ngetRawBits member function called\n0\nDestructor called\nDestructor called\nDestructor called"

# test2: all
# 	@echo "\033[32m************* INFO LEVEL **************\033[0m"
# 	./$(NAME) "INFO"
# 	@echo " "

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

.PHONY: all clean fclean re test