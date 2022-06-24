NAME = push_swap
FILES = push_swap.c ps_sort/sort.c ps_sort/sort2_3_5_10.c ps_sort/check_sort.c ps_operations/pa_pb.c ps_operations/ra_rb_rr.c ps_operations/rra_rrb_rrr.c ps_operations/sa_sb_ss.c 
SRC = $(FILES)
OBJ = $(SRC=.c=.o)
FLAGS = -Wall -Werror -Wextra
LIBFT = cd libft && make
LLIB = cd linked_list && make
LIB = libft/libft.a
LISTLIB = linked_list/liblist.a
CC = gcc

$(NAME):
	$(LIBFT)
	$(LLIB)
	$(CC) $(FLAGS) -o $(NAME) $(SRC) $(LIB) $(LISTLIB)

all: $(NAME)

clean:
	rm -rf $(OBJ)
	cd linked_list && make clean
	cd libft && make clean

fclean: clean
	rm -rf $(NAME)
	cd linked_list && make fclean
	cd libft && make fclean

re: fclean all
