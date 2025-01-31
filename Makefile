CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC = ft_printf.c ft_putchar.c ft_putstr.c ft_putnbr.c \
	  ft_puthexa_l.c ft_puthexa_u.c ft_putunsigned.c ft_putaddress.c

OBJ = $(SRC:%.c=%.o)
NAME = libftprintf.a
RM = rm -f

all: $(NAME)

$(NAME): $(OBJ)
	@ar rcs $@ $?

clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) libftprintf.a

re: fclean $(NAME)

.PHONY: all clean fclean re
