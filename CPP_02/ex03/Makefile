NAME = bsp

FLAGS = -Wall -Wextra -Werror -std=gnu++98

SRCS = main.cpp Fixed.cpp Point.cpp bsp.cpp
OBJS = $(SRCS:.cpp=.o)

$(NAME): $(OBJS)
	@echo "Compiling..."
	@clang++ $(FLAGS) -o $(NAME) $(OBJS)

$(OBJS): $(SRCS)
	@echo "Creating objects..."
	@clang++ $(FLAGS) -c $(SRCS)

all: $(NAME)

clean:
	@echo "Cleaning..."
	@rm -rf $(OBJS)
	
fclean: clean
	@rm -f $(NAME)

re: fclean all

run: all
	@./$(NAME)