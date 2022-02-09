SRCS	=	main.cpp \
		AMateria.cpp \
		Cure.cpp \
		Ice.cpp \
		Character.cpp \
		MateriaSource.cpp \

OBJS    =       ${SRCS:.cpp=.o}

CC      =       c++ -g

FLAGS   =       -Wall -Wextra -Werror -Wshadow -Wno-shadow

NAME    =       test

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
