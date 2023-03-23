# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: obeaj <obeaj@student.1337.ma>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/22 16:15:43 by obeaj             #+#    #+#              #
#    Updated: 2023/03/22 16:16:06 by obeaj            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:= PmergeMe

CC		:= c++
CFLAGS	:= -std=c++98 -Wall -Wextra -Werror

SRCS	:=  PmergeMe.cpp \
			main.cpp
		
OBJS    := $(SRCS:.cpp=.o)
INCLUDE := PmergeMe.hpp

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