# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jhvalenc <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/19 18:40:04 by jhvalenc          #+#    #+#              #
#    Updated: 2024/12/26 17:51:23 by jhvalenc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

RM = rm -f
CC = gcc
CCFLAGS = -Wall -Wextra -Werror
AR = ar rcs


SOURCE =	ft_itoa_hex.c\
		ft_itoa_ptr.c\
		ft_itoa_unsigned.c\
		ft_print_char.c\
		ft_print_decimal_int.c\
		ft_printf.c\
		ft_print_hex_lower.c\
		ft_print_hex_upper.c\
		ft_print_int.c\
		ft_print_pointer.c\
		ft_print_string.c\
		ft_print_unsigned_int.c\

OBJ = $(SOURCE:.c=.o)
NAME = libftprintf.a

all: $(NAME)

$(NAME): $(OBJ) libft/libft.a
	$(AR) $@ $^

%.o: %.c
	$(CC) $(CCFLAGS) -Ilibft -c $< -o $@

libft/libft.a:
	$(CC) $(CCFLAGS) -c libft/ft_itoa.c -o libft/ft_itoa.o
	$(CC) $(CCFLAGS) -c libft/ft_strlen.c -o libft/ft_strlen.o
	ar rcs $@ libft/ft_itoa.o libft/ft_strlen.o

TEST_NAME = test

$(TEST_NAME): $(NAME) test.c
	$(CC) $(CCFLAGS) test.c -L. -lftprintf libft/libft.a -o $(TEST_NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)
	$(RM) libft/*.o libft/libft.a

re: fclean clean

.PHONY: all fclean clean re
