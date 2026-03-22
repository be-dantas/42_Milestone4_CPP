# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: beatriz <beatriz@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/02/16 16:14:55 by bedantas          #+#    #+#              #
#    Updated: 2026/03/21 21:30:16 by beatriz          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= MutantStack

CPP			= c++
CPPFLAGS	= -Wall -Wextra -Werror -std=c++98

SRCS		= main.cpp

OBJS		= $(SRCS:.cpp=.o)

SILENT		= @

all: $(NAME)

$(NAME): $(OBJS)
	$(SILENT)$(CPP) $(CPPFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(SILENT)$(CPP) $(CPPFLAGS) -c $< -o $@

clean:
	$(SILENT)rm -f $(OBJS)

fclean: clean
	$(SILENT)rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
