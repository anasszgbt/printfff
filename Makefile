NAME = libftprintf.a
CC = gcc -Wall -Werror -Wextra

SRC = ft_printf.c ft_printf_utils.c ft_printf_digits_d.c ft_printf_hex_x.c ft_printf_perc.c ft_printf_pointer_p.c ft_printf_string.c ft_printf_uint_u.c

OBJS = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c ft_printf.h
	$(CC) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: clean