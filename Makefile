# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jpes <jpes@student.42nice.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/08 18:10:08 by jpes              #+#    #+#              #
#    Updated: 2023/05/12 13:29:04 by jpes             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a
SRCS = 	ft_printf.c \
			ft_formats.c \
			ft_print_d_i.c \
			ft_print_p.c \
			ft_print_s.c \
			ft_print_u.c \
			ft_print_c.c \
			ft_print_up_x.c \
			ft_print_x.c \
			ft_print_percent.c \
			ft_zero_case.c \
			
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