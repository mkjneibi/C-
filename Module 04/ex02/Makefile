# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mealjnei <mealjnei@student.42.ae>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/19 08:23:38 by mealjnei          #+#    #+#              #
#    Updated: 2023/06/06 17:10:08 by mealjnei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= Abstract
CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98
RM			= rm -rf

FILES		= main AAnimal Dog Cat WrongAnimal WrongCat Brain

SRC			= $(FILES:=.cpp)
OBJ			= $(SRC:.cpp=.o)
HEADER		= AAnimal.hpp Dog.hpp Cat.hpp WrongAnimal.hpp WrongCat.hpp

GREEN		=	\e[92;5;118m
YELLOW		=	\e[93;5;226m

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	@$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)
	@printf "$(GREEN) Abstract is Ready \n"

clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) $(NAME)
	@printf "$(YELLOW) OBJ files removed \n"

re: fclean all