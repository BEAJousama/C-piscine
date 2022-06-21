# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: obeaj <obeaj@student.1337.ma>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/14 18:16:54 by obeaj             #+#    #+#              #
#    Updated: 2022/05/20 16:00:58 by obeaj            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

CC = c++
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf

SRCS =  megaphone.cpp \
		
OBJS  = ${addprefix ./,${SRCS:.c=.o}}

%.o:%.c
	$(CC) $(CFLAGS) -o $@ -c $<

$(NAME) : ${OBJS}
	${CC} ${CFLAGS} ${OBJS} -o $@

all : ${NAME}

clean:

fclean: clean
	$(RM) $(NAME)

re: fclean all