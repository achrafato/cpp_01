# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aibn-che <aibn-che@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/23 12:13:14 by aibn-che          #+#    #+#              #
#    Updated: 2024/09/24 15:01:18 by aibn-che         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


MSRCS = ./main.cpp ./Sed.cpp
MOBJS = $(MSRCS:.cpp=.o)

HEADER = Sed.hpp

CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME =  SedIsForLosers

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