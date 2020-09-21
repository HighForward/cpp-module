GREEN	= \033[0;32m
GREEN_B	= \033[1;32m

SRCS	=	$(wildcard *.cpp)

OBJS	= $(SRCS:.cpp=.o)

CC		= clang++
CFLAGS	= -Wall -Wextra -Werror -std=c++98
RM		= rm -f
NAME	= replace

all:		$(NAME)

$(NAME):	$(OBJS)
			@$(CC) $(CFLAGS) $< -o $(NAME)
			@printf "$(GREEN_B)$(NAME) $(GREEN)Created.\n"

%.o:		%.cpp
			@$(CC) $(CFLAGS) -c $< -o $@

clean:
			@$(RM) $(OBJS)

fclean:		clean
			@$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re

# $@ = cible de la règle.
# $< = première dependance