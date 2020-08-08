SRCS		=   main.cpp \
                Base.cpp \
                A.cpp    \
                B.cpp    \
                C.cpp

NAME        =   dynamic_cast
FLAGS       =   -Wall -Wextra -Werror
OBJS		=   $(SRCS:%.cpp=%.o)
CC			=   clang++
RM			=   rm -f
CFLAGS		=   -Wall -Wextra -Werror

$(NAME):	${OBJS}
			@${CC} ${FLAGS} -o $(NAME) ${OBJS}
			@printf "\033[1;32m$(NAME) successfully created\033[0;0m"

all:		${NAME}

clean:
			@${RM} ${OBJS}

fclean:		clean
			@${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re