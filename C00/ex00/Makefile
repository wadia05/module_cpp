NAME = megaphone

SRCS = megaphone.cpp
OBJS = $(SRCS:.cpp=.o) 

GXX = g++
FLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJS)
	$(GXX) $(FLAGS) -o $@ $^


%.o: %.cpp
	$(GXX) $(FLAGS) -c $< -o $@

clean :
	rm -f $(OBJS)

fclean: clean
	rm -f $(OBJS) $(NAME)
	
re: fclean all

