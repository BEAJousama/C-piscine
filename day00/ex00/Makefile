# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: obeaj <obeaj@student.1337.ma>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/14 18:16:54 by obeaj             #+#    #+#              #
#    Updated: 2022/06/23 14:17:08 by obeaj            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

CC = c++
CFLAGS = -std=c++98 -Wall -Wextra -Werror

SRCS =  megaphone.cpp \
		
OBJS  = ${addprefix ./,${SRCS:.cpp=.o}}

%.o:%.cpp 
	$(CC) $(CFLAGS) -o $@ -c $<

$(NAME) : ${OBJS}
	${CC} ${CFLAGS} ${OBJS} -o $@

all : ${NAME}

clean:
	@rm -f $(OBJS)
	@echo "[INFO] Objects removed!"

fclean: clean
	@rm -f $(NAME)
	@echo "[INFO] $(NAME) removed!"

re: fclean all