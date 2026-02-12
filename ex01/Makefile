# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bedantas <bedantas@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/02/12 13:17:31 by bedantas          #+#    #+#              #
#    Updated: 2026/02/12 13:57:49 by bedantas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= phonebook

CPP			= c++
CPPFLAGS	= -Wall -Wextra -Werror -std=c++98

SRCS		= $(shell find . -name "*.cpp")

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
