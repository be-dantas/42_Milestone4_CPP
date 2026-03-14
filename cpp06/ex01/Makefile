# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bedantas <bedantas@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/02/16 16:14:55 by bedantas          #+#    #+#              #
#    Updated: 2026/03/12 09:38:53 by bedantas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= Reinterpret

CPP			= c++
CPPFLAGS	= -Wall -Wextra -Werror -std=c++98

SRCS		= main.cpp Serializer.cpp

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
