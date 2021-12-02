SRCS	=	main.cpp \
		PhoneBook.cpp \
		contact.cpp \

OBJS    =       ${SRCS:.cpp=.o}

CC      =       clang++

FLAGS   =       -Wall -Wextra -Werror -g

NAME    =       PhoneBook

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
