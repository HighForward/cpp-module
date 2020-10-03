GREEN	= \033[0;32m
GREEN_B	= \033[1;32m

SRCS	=	$(wildcard *.cpp)

OBJS	= $(SRCS:.cpp=.o)

CC		= clang++
CFLAGS	= -Wall -Wextra -Werror -std=c++98
RM		= rm -f
NAME	= unclean

all:		$(NAME)

%.o:		%.cpp
			@$(CC) $(CFLAGS) -c $< -o $@

$(NAME):	$(OBJS)
			@$(CC) $(CFLAGS) $^ -o $@
			@printf "$(GREEN_B)$(NAME) $(GREEN)Created.\n"

clean:
			@$(RM) $(OBJS)

fclean:		clean
			@$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re

# $^ = liste des dependance
# $@ = cible de la règle.
# $< = première dependance