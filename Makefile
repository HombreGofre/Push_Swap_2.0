# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cnunez-s <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/24 14:09:33 by cnunez-s          #+#    #+#              #
#    Updated: 2023/07/24 14:55:51 by cnunez-s         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	push_swap.c ft_split.c ft_swap.c ft_utils.c ft_utils_2.c
OBJS	=	${SRCS:.c=.o}
NAME	=	push_swap
CC			=	gcc
AR			=	ar rc
CFLAGS	=	-Wall -Werror -Wextra

.c.o:
		${CC} ${CFLAGS} -c ${SRCS}

all:	${NAME}

${NAME}: ${OBJS}
	${CC} ${CFLAGS} ${OBJS} -o ${NAME}
#	${AR} ${NAME} ${OBJS}

clean:
		${RM} ${OBJS}

fclean: clean
		${RM} ${NAME}

re:		fclean all

.PHONY: all clean fclean re
