NAME			:= I-do-not-want-to-set-the-world-on-fire

CXX				:= c++
CXXFLAGS		:= -Wall -Wextra -Werror -std=c++98
RM				:= rm -f

SRCS	:= \
				main.cpp \
				Animal.cpp \
				Dog.cpp \
				Cat.cpp \
				Brain.cpp

OBJS		= $(SRCS:.cpp=.o)

.PHONY:	all clean fclean re

all:			$(NAME)

clean:
				$(RM) $(OBJS)

fclean:	clean
				$(RM) $(NAME)

re:				fclean all

$(NAME):	$(OBJS)
					$(CXX) $(CXXFLAGS) $^ -o $@
