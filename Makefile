# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rayderha <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/07 20:35:44 by rayderha          #+#    #+#              #
#    Updated: 2023/12/07 21:05:07 by rayderha         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #




NAME = libftprintf.a
SOURCES = \
	ft_itoa.c ft_printf.c ft_putnbr.c ft_size.c ft_puthexa.c

OBJECTS = $(SOURCES:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJECTS)
	$(AR) -r $@ $?



%.o: %.c ft_printf.h
	$(CC) -c $(CFLAGS) $?

clean:
	rm -f $(OBJECTS) 

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re
