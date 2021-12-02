SRCS	=	megaphone.cpp

OBJS    =       ${SRCS:.cpp=.o}

CC      =       clang++

FLAGS   =       -Wall -Wextra -Werror

NAME    =       megaphone

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

test:
	./megaphone "shhhhh... I think the students are asleep..."
	./megaphone Damnit " ! " "Sorry students, I thought this thing was off."
	./megaphone 

.PHONY: all clean fclean re
