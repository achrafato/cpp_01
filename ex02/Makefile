# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aibn-che <aibn-che@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/30 09:54:26 by aibn-che          #+#    #+#              #
#    Updated: 2024/07/31 11:07:05 by aibn-che         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

MSRCS = ./main.cpp
MOBJS = $(MSRCS:.cpp=.o)

CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = brain

all : $(NAME)

%.o:%.cpp
	c++ $(CFLAGS) -c $< -o $@

$(NAME): $(MOBJS)
	c++ $(CFLAGS) $^ -o $(NAME)

clean:
	rm -f $(MOBJS)

fclean: clean
	rm -f $(NAME)
	
re: fclean $(NAME)