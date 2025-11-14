NAME	:= libft.a

CC		:= cc
CFLAGS	:= -Wall -Wextra -Werror -I.

AR		:= ar rcs
RM		:= rm -f

SRC_DIR	:= .
OBJ_DIR	:= obj

SRCS	:= $(wildcard $(SRC_DIR)/*.c $(SRC_DIR)/*/*.c)
OBJS	:= $(SRCS:%.c=$(OBJ_DIR)/%.o)
DEPS	:= $(OBJS:.o=.d)

all: $(NAME)

$(NAME): $(OBJS)
	@$(AR) $@ $^

$(OBJ_DIR)/%.o: %.c
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) -MMD -MP -c $< -o $@

-include $(DEPS)

clean:
	@$(RM) -r $(OBJ_DIR)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

bonus: all