NAME        = libftprintf.a

CC          = cc
CFLAGS      = -Wall -Wextra -Werror

LIBFT_DIR   = libft
SRC_DIR     = src

SRC_ROOT    = ft_printf.c
SRC_HELPERS = ft_print_char.c \
              ft_print_str.c \
              ft_print_nbr.c \
              ft_print_unsigned.c \
              ft_print_hex.c \
              ft_print_hex_upper.c \
			  ft_print_ptr.c

SRCS        = $(SRC_ROOT) $(addprefix $(SRC_DIR)/, $(SRC_HELPERS))
OBJS        = $(SRCS:.c=.o)

LIBFT       = $(LIBFT_DIR)/libft.a

all: $(NAME)

bonus: all

$(NAME): $(LIBFT) $(OBJS)
	@cp $(LIBFT) $(NAME)
	@ar rcs $(NAME) $(OBJS)

$(LIBFT):
	@make -C $(LIBFT_DIR)

%.o: %.c
	@$(CC) $(CFLAGS) -I. -I$(LIBFT_DIR) -c $< -o $@

clean:
	@rm -f $(OBJS)
	@make -C $(LIBFT_DIR) clean

fclean: clean
	@rm -f $(NAME)
	@make -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: all clean fclean re bonus