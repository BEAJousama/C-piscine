# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: obeaj <obeaj@student.1337.ma>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/22 16:39:23 by obeaj             #+#    #+#              #
#    Updated: 2022/06/22 17:52:33 by obeaj            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:= zombie

CC		:= c++
CFLAGS	:= -std=c++98 -Wall -Wextra -Werror
RM		:= rm -rf

SRCS	:=  Zombie.cpp \
			main.cpp \
			zombieHorde.cpp \

		
OBJS    := $(SRCS:.cpp=.o)
INCLUDE := Zombie.hpp

$(NAME) : ${OBJS} $(INCLUDE)
	${CC} ${CFLAGS} ${OBJS} -o $@

%.o: %.cpp %.hpp
	$(CC) $(CFLAGS) -o $@ -c $<


all : ${NAME}

clean:
	@rm -f $(OBJS)
	@echo "[INFO] Objects removed!"

fclean: clean
	@rm -f $(NAME)
	@echo "[INFO] $(NAME) removed!"

re: fclean all