# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jpes <jpes@student.42nice.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/08 18:10:08 by jpes              #+#    #+#              #
#    Updated: 2023/05/08 18:10:12 by jpes             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a
SRCS = 	ft_printf.c \
		ft_formats.c \
		ft_putchar.c \
		ft_putnbr_fd.c \
		ft_putstr_fd.c \
		ft_putptr.c \
			
OBJECTS = ${SRCS:.c=.o}
RM = rm -f

all: ${NAME}

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}: ${OBJECTS}
	ar rcs ${NAME} ${OBJECTS}
	@echo "Library successfuly created."

clean:
	${RM} ${OBJECTS}
	@echo "Files .o successfuly removed"

fclean: clean
	${RM} ${NAME}
	@echo "Files .a successfuly removed"

re: fclean all