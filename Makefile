FLAG = -Wextra -Werror -Wall

CC = gcc

NAME = libftprintf.a

SOURCE = srcs/ft_printf_print_char.c \
			srcs/ft_printf_print_hex.c \
			srcs/ft_printf_print_int.c \
			srcs/ft_printf_print_pointer_address.c \
			srcs/ft_printf_print_str.c \
			srcs/ft_printf_print_u_int.c \
			srcs/ft_printf_utils.c \
			srcs/ft_printf.c \

OBJECT = $(SOURCE:%.c=%.o)

ARCHIVE = ar src

REMOVE = rm -f

all: $(NAME)

%.o: %.c
			$(CC) $(FLAG) -o $@ -c $<

$(NAME):		$(OBJECT)
								$(CC) $(FLAG) -c $(SOURCE) -I./
								$(ARCHIVE) $(NAME) $(OBJECT)

clean:							
								$(REMOVE) $(OBJECT)

fclean:			clean
								$(REMOVE) $(NAME)

re:				fclean all