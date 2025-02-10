# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aibn-che <aibn-che@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/30 09:54:26 by aibn-che          #+#    #+#              #
#    Updated: 2024/09/18 15:29:03 by aibn-che         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

MSRCS = ./Zombie.cpp ./main.cpp ./newZombie.cpp ./randomChump.cpp
MOBJS = $(MSRCS:.cpp=.o)

HEADER = Zombie.hpp

CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = zombie

all : $(NAME)

%.o:%.cpp $(HEADER)
	c++ $(CFLAGS) -c $< -o $@

$(NAME): $(MOBJS)
	c++ $(CFLAGS) $^ -o $(NAME)

clean:
	rm -f $(MOBJS)

fclean: clean
	rm -f $(NAME)
	
re: fclean $(NAME)