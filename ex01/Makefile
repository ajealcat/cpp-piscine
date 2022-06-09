# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ajearuth <ajearuth@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/09 11:09:48 by ajearuth          #+#    #+#              #
#    Updated: 2022/06/09 13:59:39 by ajearuth         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	
SRCS	=	
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