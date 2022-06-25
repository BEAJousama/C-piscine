# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: obeaj <obeaj@student.1337.ma>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/24 21:14:44 by obeaj             #+#    #+#              #
#    Updated: 2022/06/24 21:15:10 by obeaj            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = harlFilter

CC = c++
CC_FLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f
INCLUD = Harl.hpp

SRCS =	main.cpp \
		Harl.cpp

OBJS = $(SRCS:.cpp=.o)

%.o: %.cpp $(INCLUD)
	$(CC) $(CC_FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)


all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all