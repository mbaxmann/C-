SRCS	=	main.cpp \
		Animal.cpp \
		Cat.cpp \
		Dog.cpp \
		WrongAnimal.cpp \
		WrongCat.cpp \

OBJS    =       ${SRCS:.cpp=.o}

CXX      =       c++

CXXFLAGS   =       -Wall -Wextra -Werror -std=c++98

NAME    =       Animal_test

RM      =       rm -rf

all:    ${NAME}

${NAME}:        ${OBJS}
		${CXX} ${CXXFLAGS} -o ${NAME} ${OBJS}

clean:
	${RM} ${OBJS}

fclean:         clean
	${RM} ${NAME}

re:	fclean all

.PHONY: all clean fclean re
