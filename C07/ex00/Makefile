SRCS	=	main.cpp \

HEADER	=	whatever.hpp

OBJS    =       ${SRCS:.cpp=.o}

CXX      =       c++

CXXFLAGS   =       -Wall -Wextra -Werror -std=c++98

NAME    =       template_test

RM      =       rm -rf

all:    ${NAME}

%.o: %.cpp	${HEADER}
	${CXX} ${CXXFLAGS} -o $@ -c $<

${NAME}:        ${HEADER} ${OBJS}
		${CXX} ${CXXFLAGS} -o ${NAME} ${OBJS}

clean:
	${RM} ${OBJS}

fclean:         clean
	${RM} ${NAME}

re:	fclean all

.PHONY: all clean fclean re
