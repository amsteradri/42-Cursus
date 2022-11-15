# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adgutier <adgutier@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/27 10:47:49 by adgutier          #+#    #+#              #
#    Updated: 2022/11/10 17:09:11 by adgutier         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
AR = ar cr
NAME= libft.a
SOURCES = main.c ft_putchar.c ft_putstr.c ft_strcpy.c push_swap_utils.c ft_atoi.c moves.c push_swap.c
OBJECTS = $(SOURCES:.c=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) push_swap.a -o push_swap

clean:
	$(RM) $(OBJECTS) $(BONUS_OBJ)

fclean: clean
	$(RM) $(NAME)
	$(RM) push_swap.a
	$(RM) push_swap


re: fclean all