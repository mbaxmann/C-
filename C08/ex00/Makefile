SRCS	=	main.cpp \

OBJS    =       ${SRCS:.cpp=.o}

CC      =       c++

FLAGS   =       -Wall -Wextra -Werror -std=c++98

NAME    =       easyfind

RM      =       rm -rf

all:    ${NAME}

.c.o:
	${CC} ${FLAGS} -cpp $< -o ${<:.cpp=.o}

${NAME}:        ${OBJS}
		${CC} -o ${NAME} ${OBJS}

clean:
	${RM} ${OBJS}

fclean:         clean
	${RM} ${NAME}

re:	fclean all

.PHONY: all clean fclean re
