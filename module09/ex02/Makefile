# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ajearuth <ajearuth@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/16 13:16:02 by ajearuth          #+#    #+#              #
#    Updated: 2023/03/22 17:29:23 by ajearuth         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	PmergeMe
SRCS	=	main.cpp PmergeMe.cpp 
OBJS	=	$(SRCS:.cpp=.o)
COMPIL	=	c++
FLAGS	=	-std=c++98 -Wall -Wextra -Werror

all:	$(NAME)

%.o: %.cpp
	$(COMPIL) $(FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(COMPIL) $(FLAGS) $(OBJS) -o $@

clean:
	rm -rf $(OBJS)

fclean:	clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re