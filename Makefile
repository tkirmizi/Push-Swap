.SILENT:

NAME = push_swap
SRCS = main.c operations.c push.c rotate.c \
		rev_rotate.c swap.c position.c \
		 all_sorting.c all_sorting2.c \
		error_check.c arguman_handle.c

OBJS = $(SRCS:.c=.o)

LIBFT_PATH = ./Libft
LIBFT_OBJ = ./Libft/libft.a

FT_PRINTF_PATH = ./Libft/printf
FT_PRINTF_OBJ = ./Libft/printf/libftprintf.a

CC = gcc -g 
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf

all: $(NAME)

$(LIBFT_OBJ):
	make -C $(LIBFT_PATH)

$(FT_PRINTF_OBJ):
	make -C $(FT_PRINTF_PATH)

$(NAME): $(OBJS) $(LIBFT_OBJ) $(FT_PRINTF_OBJ)
	$(CC) $(CFLAGS) $(OBJS) $(LIBFT_OBJ) $(FT_PRINTF_OBJ) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)
	make clean -C $(LIBFT_PATH)
	make clean -C $(FT_PRINTF_PATH)
fclean: clean
	$(RM) $(NAME)
	$(RM) $(OBJS)
	$(RM) $(LIBFT_OBJ)
	$(RM) $(FT_PRINTF_OBJ)
re: fclean all