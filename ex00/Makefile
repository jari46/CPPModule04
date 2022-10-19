NAME			:= Polymorphism

CXX				:= c++
CXXFLAGS		:= -Wall -Wextra -Werror -std=c++98
RM				:= rm -f

SRCS	:= \
				main.cpp \
				Animal.cpp \
				Dog.cpp \
				Cat.cpp \
				WrongAnimal.cpp \
				WrongCat.cpp

OBJS		= $(SRCS:.cpp=.o)

.PHONY:	all std clean fclean re

all:			$(NAME)

clean:
				$(RM) $(OBJS)

fclean:	clean
				$(RM) $(NAME)

re:				fclean all

$(NAME):	$(OBJS)
					$(CXX) $(CXXFLAGS) $^ -o $@
