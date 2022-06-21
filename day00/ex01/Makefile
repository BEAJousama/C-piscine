# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: obeaj <obeaj@student.1337.ma>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/20 15:30:16 by obeaj             #+#    #+#              #
#    Updated: 2022/05/20 15:51:29 by obeaj            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

CC = c++
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf

SRCS =  Contact.cpp \
		main.cpp \
		PhoneBook.cpp
		
OBJS  = ${addprefix ./,${SRCS:.c=.o}}
INCLUDE = Contact.hpp PhoneBook.hpp

%.o:%.c $(INCLUDE)
	$(CC) $(CFLAGS) -o $@ -c $<

$(NAME) : ${OBJS} Contact.hpp PhoneBook.hpp
	${CC} ${CFLAGS} ${OBJS} -o $@

all : ${NAME}

clean:

fclean: clean
	$(RM) $(NAME)

re: fclean all