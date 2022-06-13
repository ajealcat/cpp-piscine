# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ajearuth <ajearuth@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/09 11:09:48 by ajearuth          #+#    #+#              #
#    Updated: 2022/06/13 11:03:38 by ajearuth         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	phonebook
SRCS	=	Contact.cpp Phonebook.cpp 
INC	=	PhoneBook.hpp	Contact.hpp
OBJS	=	$(SRCS:.cpp=.o)
COMPIL	=	c++
FLAGS	=	-std=c++98 -Wall -Wextra -Werror

all:	$(NAME)

$(OBJS)%.o: $(SRCS)%.cpp
	$(COMPIL) $(FLAGS) $< -c -o $(INC) $@

$(NAME): $(OBJS)
	$(COMPIL) $(FLAGS) $(OBJS) -o $@

clean:
	rm -rf $(OBJS)

fclean:	clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re