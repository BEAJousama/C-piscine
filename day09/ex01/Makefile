# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: obeaj <obeaj@student.1337.ma>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/22 13:11:34 by obeaj             #+#    #+#              #
#    Updated: 2023/03/28 15:03:03 by obeaj            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:= RPN

CC		:= c++
CFLAGS	:= -std=c++98 -Wall -Wextra -Werror

SRCS	:=  RPN.cpp \
			main.cpp
		
OBJS    := $(SRCS:.cpp=.o)
INCLUDE := RPN.hpp

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

.PHONY: all clean fclean re