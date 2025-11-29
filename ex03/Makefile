NAME=test
CPP=c++
CFLAGS=-std=c++98 -Wall -Wextra -Werror
SRCS=\
	AMateria.cpp\
	Cure.cpp\
	Ice.cpp\
	MateriaSource.cpp\
	Character.cpp\
	print_utils.cpp\
	main.cpp
INC=-I./includes
OBJS=$(SRCS:.cpp=.o)
$(NAME): $(OBJS)
	$(CPP) $(CFLAGS) -o $@ $(OBJS)
%.o: %.cpp
	$(CPP) $(CFLAGS) $(INC) -c $< -o $@

all: $(NAME)
clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)
re: fclean all
.PHONY: all clean fclean re
