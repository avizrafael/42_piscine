
NAME = rush-02

SRCS = main.c functions.c rush02.c

OBJS = ${SRC:.c=.o}

FLAGS = -Wall -Werror -Wextra

all:	${NAME}

${NAME}: ${OBJS}
	cc -o ${NAME} ${SRCS} ${FLAGS}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all
