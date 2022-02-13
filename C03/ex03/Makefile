SRCS	=	main.cpp \
		ClapTrap.cpp \
		ScavTrap.cpp \
		FragTrap.cpp \
		DiamondTrap.cpp \

OBJS    =       ${SRCS:.cpp=.o}

CXX      =       c++

CXXFLAGS   =       -Wall -Wextra -Werror -Wshadow -Wno-shadow -std=c++98

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
