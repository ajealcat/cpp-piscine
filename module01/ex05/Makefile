# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ajearuth <ajearuth@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/30 12:01:18 by ajearuth          #+#    #+#              #
#    Updated: 2022/09/05 17:22:41 by ajearuth         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	execute
SRCS	=	main.cpp Harl.cpp
OBJS	=	$(SRCS:.cpp=.o)
COMPIL	=	c++
FLAGS	=	-std=c++98 -Wall -Wextra -Werror


# $< = dependances | $@ = regles -> .o

%.o: %.cpp
	$(COMPIL) $(FLAGS) -c $< -o $@

all:	$(NAME)

$(NAME): $(OBJS)
	$(COMPIL) $(FLAGS) $(OBJS) -o $@

clean:
	rm -rf $(OBJS)

fclean:	clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re