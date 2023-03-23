# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: obeaj <obeaj@student.1337.ma>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/20 15:56:46 by obeaj             #+#    #+#              #
#    Updated: 2023/03/22 09:10:29 by obeaj            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:= btc

CC		:= c++
CFLAGS	:= -std=c++98 -Wall -Wextra -Werror

SRCS	:=  BitcoinExchange.cpp \
			main.cpp
		
OBJS    := $(SRCS:.cpp=.o)
INCLUDE := BitcoinExchange.hpp

$(NAME) : ${OBJS} 
	${CC} ${CFLAGS} ${OBJS} -o $@

%.o: %.cpp $(INCLUDE)
	$(CC) $(CFLAGS) -o $@ -c $<


all : ${NAME}

clean:
	@rm -f $(OBJS)
	@echo "[INFO] Objects removed!"

fclean: clean
	@rm -f $(NAME)
	@echo "[INFO] $(NAME) removed!"

re: fclean all