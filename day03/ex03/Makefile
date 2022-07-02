# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: obeaj <obeaj@student.1337.ma>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/27 21:01:26 by obeaj             #+#    #+#              #
#    Updated: 2022/07/01 15:49:12 by obeaj            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = DiamondTrap

CC= c++
CC_FLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f
INCLUD = ClapTrap.hpp ScarvTrap.hpp FragTrap.hpp DiamondTrap.hpp

SRCS =	main.cpp \
		ClapTrap.cpp \
		ScarvTrap.cpp \
		FragTrap.cpp \
		DiamondTrap.cpp \

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