# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ajearuth <ajearuth@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/01 16:05:24 by anna              #+#    #+#              #
#    Updated: 2022/10/03 14:30:21 by ajearuth         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	convert
SRCS	=	main.cpp Conversion.cpp 
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