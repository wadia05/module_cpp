NAME = Zombie
SRCS = main.cpp zombieHorde.cpp Zombie.cpp
OBJS = $(SRCS:.cpp=.o)
GXX = g++
FLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJS)
	$(GXX) $(FLAGS) -o $@ $^

%.o: %.cpp
	$(GXX) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

# .PHONY: all clean fclean re