# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mealjnei <mealjnei@student.42.ae>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/02 14:10:31 by mealjnei          #+#    #+#              #
#    Updated: 2023/03/05 15:33:33 by mealjnei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= Fixed
CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98
RM			= rm -rf

FILES		= main Fixed

SRC			= $(FILES:=.cpp)
OBJ			= $(SRC:.cpp=.o)
HEADER		= Fixed.hpp

GREEN		=	\e[92;5;118m
YELLOW		=	\e[93;5;226m

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	@$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)
	@printf "$(GREEN) Fixed is Ready"

clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) $(NAME)
	@printf "$(YELLOW) OBJ files removed"

re: fclean all