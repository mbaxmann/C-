SRCS	=	main.cpp \
		ClapTrap.cpp \

OBJS    =       ${SRCS:.cpp=.o}

CXX      =       c++

CXXFLAGS   =       -Wall -Wextra -Werror -std=c++98

NAME    =       ClapTrap_test

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
