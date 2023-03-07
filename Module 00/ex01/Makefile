# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mealjnei <mealjnei@student.42.ae>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/02 12:07:44 by mealjnei          #+#    #+#              #
#    Updated: 2023/02/26 12:39:43 by mealjnei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= Phonebook
CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98
RM			= rm -rf

FILES		= main contact phonebook

SRC			= $(FILES:=.cpp)
OBJ			= $(SRC:.cpp=.o)
HEADER		= contact.hpp phonebook.hpp

GREEN		=	\e[92;5;118m
YELLOW		=	\e[93;5;226m

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	@$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)
	@printf "$(GREEN) Phonebook is Ready"

clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) $(NAME)
	@printf "$(YELLOW) OBJ files removed"

re: fclean all