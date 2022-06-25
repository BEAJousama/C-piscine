# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: obeaj <obeaj@student.1337.ma>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/25 13:06:54 by obeaj             #+#    #+#              #
#    Updated: 2022/06/25 13:07:47 by obeaj            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = account

CC = c++
CFLAGS = -std=c++98 -Wall -Wextra -Werror

SRCS =  Account.cpp \
		tests.cpp \
		
OBJS  = ${addprefix ./,${SRCS:.cpp=.o}}
INCLUDE = Account.hpp

%.o:%.cpp $(INCLUDE)
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