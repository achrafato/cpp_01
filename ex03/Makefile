# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aibn-che <aibn-che@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/30 09:54:26 by aibn-che          #+#    #+#              #
#    Updated: 2024/08/06 11:56:53 by aibn-che         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

MSRCS = ./main.cpp ./HumanB.cpp ./HumanA.cpp ./Weapon.cpp 
MOBJS = $(MSRCS:.cpp=.o)

CFLAGS = -Wall -Wextra -Werror -std=c++98

HEADERS = HumanA.hpp HumanB.hpp Weapon.hpp

NAME = weapon

all : $(NAME)

%.o:%.cpp $(HEADERS)
	c++ $(CFLAGS) -c $< -o $@

$(NAME): $(MOBJS)
	c++ $(CFLAGS) $^ -o $(NAME)

clean:
	rm -f $(MOBJS)

fclean: clean
	rm -f $(NAME)
	
re: fclean $(NAME)