# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: edehmlow <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/12 21:27:38 by edehmlow          #+#    #+#              #
#    Updated: 2018/08/02 19:57:16 by edehmlow         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

FLAGS = -c -Wall -Wextra -Werror

ARCHIVE = ar rc

INDEX = ranlib

OBJ = *.o

SRC_CHAR = ft_isalnum.c ft_isalpha.c ft_isascii.c \
		   ft_isdigit.c ft_islower.c ft_isprint.c \
		   ft_isspace.c ft_isupper.c ft_tolower.c \
		   ft_toupper.c

SRC_CHAR += char/

SRC_CNVT = ft_atoi.c ft_itoa.c

SRC_LST = ft_lstadd.c ft_lstdel.c ft_lstdelone.c ft_lstiter.c ft_lstmap.c \
		  ft_lstnew.c

SRC_MEM = ft_bzero.c ft_memalloc.c ft_memcpy.c ft_memccpy.c \
		  ft_memchr.c ft_memcmp.c ft_memdel.c \
		  ft_memmove.c ft_memset.c

SRC_PRT = ft_putchar.c ft_putchar_fd.c \
		  ft_putendl.c ft_putendl_fd.c \
		  ft_putnbr.c ft_putnbr_fd.c \
		  ft_putstr.c ft_putstr_fd.c \
		  ft_puttbl.c ft_puttbl_fd.c

SRC_STR = ft_strcpy.c ft_strncpy.c ft_strdup.c ft_strlen.c \
		  ft_strcat.c ft_strncat.c ft_strlcat.c ft_strchr.c \
		  ft_strrchr.c ft_strstr.c ft_strnstr.c ft_strcmp.c \
		  ft_strncmp.c ft_strnew.c ft_strclr.c ft_strtrim.c\
		  ft_striter.c ft_striteri.c ft_strmap.c ft_strmapi.c \
		  ft_strequ.c ft_strnequ.c ft_strsub.c ft_strjoin.c \
		  ft_strndup.c ft_strdel.c ft_strsplit.c chk_for_char.c

SRCS = $(SRC_CHAR) $(SRC_STR) $(SRC_PRT) $(SRC_CNVT)
SRCS += $(SRC_MEM) $(SRC_LST)

.PHONY: all clean fclean re

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) $(SRCS) $(HEADER)
	$(ARCHIVE) $(NAME) $(OBJ)
	$(INDEX) $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
