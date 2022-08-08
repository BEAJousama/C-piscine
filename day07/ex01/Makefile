# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: obeaj <obeaj@student.1337.ma>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/08 15:05:55 by obeaj             #+#    #+#              #
#    Updated: 2022/08/08 15:06:06 by obeaj            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = iter

CC = c++
CC_FLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f
INCLUD = iter.h

SRCS =	main.cpp \

OBJS = $(SRCS:.cpp=.o)

%.o: %.cpp $(INCLUD)
	$(CC) $(CC_FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(CC_FLAGS) $(OBJS) -o $(NAME)


all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all