SRCS	=	main.cpp \
		convert_str.cpp \
		isWhat.cpp \
		display_type.cpp \

HEADER	=	convert_str.hpp \

OBJS    =       ${SRCS:.cpp=.o}

CXX      =       c++

CXXFLAGS   =       -Wall -Wextra -Werror -std=c++98

NAME    =       convert

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
