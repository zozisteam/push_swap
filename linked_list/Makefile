NAME = liblist.a

SRCS = list_utils_0.c list_utils_1.c list_utils_2.c

SRCO = $(SRCS:.c=.o)

all : $(NAME)

$(NAME): $(SRCO)
	ar -cr $(NAME) $(SRCO)

$(SRCO): 
	gcc -Wall -Werror -Wextra -c $(SRCS)

clean :
	rm -f $(SRCO)

fclean : clean
	rm -f $(NAME)
	
re : fclean all
