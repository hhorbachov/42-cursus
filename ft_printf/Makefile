NAME    := libftprintf.a

CC      := cc
CFLAGS  := -Wall -Wextra -Werror -I.

AR      := ar rcs
RM      := rm -f

SRCS    :=	ft_printf.c ft_print_str.c ft_print_unsigned.c \
			ft_print_nbr.c ft_print_hex.c ft_print_char.c

OBJS    := $(SRCS:.c=.o)
DEPS    := $(OBJS:.o=.d)

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
	@$(AR) $@ $^

%.o: %.c
	@$(CC) $(CFLAGS) -MMD -MP -c $< -o $@

-include $(DEPS)

clean:
	@$(RM) $(OBJS) $(DEPS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all