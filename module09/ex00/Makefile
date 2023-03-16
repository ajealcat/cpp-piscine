# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ajearuth <ajearuth@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/16 10:17:52 by ajearuth          #+#    #+#              #
#    Updated: 2023/03/16 13:50:48 by ajearuth         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	btc
SRCS	=	main.cpp BitcoinExchange.cpp
OBJS	=	$(SRCS:.cpp=.o)
COMPIL	=	c++
FLAGS	=	-std=c++98 -Wall -Wextra -Werror

all:	$(NAME)

$(OBJS)%.o: $(SRCS)%.cpp
	$(COMPIL) $(FLAGS) $< -c -o $@

$(NAME): $(OBJS)
	$(COMPIL) $(FLAGS) $(OBJS) -o $@

clean:
	rm -rf $(OBJS)

fclean:	clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re