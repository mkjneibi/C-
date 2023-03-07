# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mealjnei <mealjnei@student.42.ae>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/27 16:59:54 by mealjnei          #+#    #+#              #
#    Updated: 2023/02/27 17:01:24 by mealjnei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= Harl
CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98
RM			= rm -rf

FILES		= main Harl

SRC			= $(FILES:=.cpp)
OBJ			= $(SRC:.cpp=.o)
HEADER		= Harl.hpp

GREEN		=	\e[92;5;118m
YELLOW		=	\e[93;5;226m

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	@$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)
	@printf "$(GREEN) Harl is Ready"

clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) $(NAME)
	@printf "$(YELLOW) OBJ files removed"

re: fclean all