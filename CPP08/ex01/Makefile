GREEN	= \033[0;32m
GREEN_B	= \033[1;32m
RESET	= \033[0m

SRCS	=	$(wildcard *.cpp)

OBJS	= $(SRCS:.cpp=.o)

CC		= clang++
CFLAGS	= -Wall -Wextra -Werror -std=c++98
RM		= rm -f
NAME	= span

all:		$(NAME)

%.o:		%.cpp
			@$(CC) $(CFLAGS) -c -MD $< -o $@

$(NAME):	$(OBJS)
			@$(CC) $(CFLAGS) $^ -o $@
			@$(RM) *.d
			@$(RM) *.o
			@printf "$(GREEN_B)$(NAME) $(GREEN)Created.$(RESET)\033[0;0m\n"


include_dep:
			@$(RM) *.d

clean:		include_dep
			@$(RM) $(OBJS)

fclean:		clean
			@$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re

-include *.d

# $^ = liste des dependance
# $@ = cible de la règle.
# $< = première dependance