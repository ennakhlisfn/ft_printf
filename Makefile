# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sennakhl <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/07 16:37:31 by sennakhl          #+#    #+#              #
#    Updated: 2023/12/07 22:23:39 by sennakhl         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
SOURCE = ft_printf.c ft_putchr.c ft_putstr.c ft_putpointer.c ft_putnbr.c ft_putnbr_u.c \
		ft_puthex.c ft_hex.c

OBJECTS = $(SOURCE:%.c=%.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar -rsc

all : $(NAME)

$(NAME) : $(OBJECTS)
	$(AR) $@ $?

clean :
	rm -f $(OBJECTS)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re
