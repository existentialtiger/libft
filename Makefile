NAME = libft.a

FLAGS = -c -Wall -Wextra -Werror

ARCHIVE = ar rc

INDEX = ranlib

HEADER = /incls/libft.h

SRC_CHAR = /srcs/char/ft_isalnum.c /srcs/char/ft_isalpha.c \
			/srcs/char/ft_isascii.c /srcs/char/ft_isdigit.c \
			/srcs/char/ft_islower.c /srcs/char/ft_isprint.c \
			/srcs/char/ft_isspace.c /srcs/char/ft_isupper.c \
			/srcs/char/ft_tolower.c /srcs/char/toupper.c

SRC_STR = /srcs/string/ft_strcpy.c /srcs/string/ft_strdup.c \
			/srcs/string/ft_strlen.c

SRC_PTR = /srcs/print/ft_putchar.c /srcs/print/ft_putchar_fd.c \
			/srcs/print/ft_putendl.c /srcs/print/ft_putendl_fd.c \
			/srcs/print/ft_putstr.c /srcs/print/ft_putstr_fd.c

all: $(NAME)

clean:

fclean: clean
	rm -f libft.a

re: fclean all
