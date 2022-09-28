# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    MAKEFILE                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adgutier <adgutier@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/23 10:56:40 by adgutier          #+#    #+#              #
#    Updated: 2022/09/23 13:23:57 by adgutier         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SOURCES = bzero.c calloc.c ft_atoi.c ft_itoa.c ft_putstr_fd.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c isalnum.c isalpha.c isascii.c isdigit.c isprint.c memchr.c memcmp.c memset.c split.c strdup.c striteri.c strjoin.c strlcat.c strlcpy.c strlen.c strmapi.c strncmp.c strtrim.c substr.c tolower.c toupper.c strchr.c strrchr.c strnstr.c memcpy.c memmove.c

OBJECTS = $(SOURCES:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJECTS)
	$(AR) -r $@ $?

%.o: %.c
	$(CC) -c $(CFLAGS) $?

clean:
	rm -f $(OBJECTS) 

fclean: clean
	rm -f $(NAME)

re: fclean all
