SRCS	=	main.cpp \
		Zombie.cpp \
		ZombieHorde.cpp \

OBJS    =       ${SRCS:.cpp=.o}

CC      =       clang++

FLAGS   =       -Wall -Wextra -Werror

NAME    =       Zombie_Horde_Land

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
