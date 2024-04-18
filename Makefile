NAME = push_swap

# SRCS AND OBJS FOR COMPILING

SRCS = push_swap.c control_error.c stacks/stack_utils.c
INCLUDES = libft/
OBJS = $(SRCS:%.c=%.o)

# FLAGS
CC = clang
CFLAGS = -Wall -Werror -Wextra
CLIB = -L libft/ -l libft
DEBUGGER = -g3

all : $(NAME)
%.o : %.c 
		$(CC) $(CFLAGS) -c $< -o $@ #(DEBUGGER)
$(NAME) : $(OBJS)
		make -C libft
		$(CC) $(CFLAGS) -I $(INCLUDES) $(OBJS) -o $(NAME) $(CLIB) $(DEBUGGER)
clean : 
		rm -rf $(OBJS)
fclean : 
		rm -rf $(NAME)

re : fclean all