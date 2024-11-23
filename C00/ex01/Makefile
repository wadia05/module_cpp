NAME  = phonebook
SRCS = PhoneBook.cpp

OBJS = $(SRCS:.cpp=.o)

GXX = g++
FLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME) : $(OBJS)
	$(GXX) $(FLAGS) -o $@ $^

%.o : %.cpp
	$(GXX) $(FLAGS) -c $< -o $@

clean :
	rm -f $(OBJS)

fclean :
	rm -f $(OBJS) $(NAME)

re : fclean all 