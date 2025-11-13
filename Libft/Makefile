CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
SRC = ft_itoa.c ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c ft_lstiter.c \
	ft_lstlast.c ft_lstmap.c ft_lstnew.c ft_lstsize.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
	ft_putstr_fd.c ft_striteri.c ft_strlen.c ft_strmapi.c
OBJ = $(SRC:.c=.o)

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)
	@echo "Library Created!"

%.o: %.c
	@cc $(CFLAGS) -c $< -o $@
clean:
	@rm -f $(OBJ)
	@echo "Object files removed"
fclean: clean
	@rm -f $(NAME)
	@echo "Library removed"
re: fclean all
