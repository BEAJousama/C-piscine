# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: obeaj <obeaj@student.1337.ma>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/07 14:46:59 by obeaj             #+#    #+#              #
#    Updated: 2022/08/07 15:54:06 by obeaj            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = identify

CC = c++
CC_FLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f
INCLUD = Identify.h Base.hpp A.hpp B.hpp C.hpp

SRCS =	main.cpp \
		Identify.cpp \

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