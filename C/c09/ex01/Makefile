NAME	= libft.a
SRC		= srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c
INC		= includes/ft.h
OBJ		= ${SRC:.c=.o}
GV		= gcc
FLAG	= -Wall -Wextra -Werror
AR		= ar -r
RM		= rm -f

.PHONY:		all clean fclean re

all:		${NAME}

${NAME}:	${OBJ}
			${AR} $@ $^

%.o:%.c
		$(GV) ${FLAG} -c $< -I ${INC} -o $@

clean:
			${RM} ${OBJ}

fclean:		clean
			${RM} ${NAME}

re:			fclean all
