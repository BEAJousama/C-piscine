# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: obeaj <obeaj@student.1337.ma>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/20 12:05:21 by obeaj             #+#    #+#              #
#    Updated: 2022/08/07 11:54:33 by obeaj            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = convert

CC = c++
CC_FLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f
INCLUD = Convert.hpp

SRCS =	main.cpp \
		Convert.cpp \

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