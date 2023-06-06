# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mealjnei <mealjnei@student.42.ae>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/19 08:23:38 by mealjnei          #+#    #+#              #
#    Updated: 2023/06/06 17:07:32 by mealjnei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= Interface
CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98
RM			= rm -rf

FILES		= main AMateria Character Cure Ice MateriaSource

SRC			= $(FILES:=.cpp)
OBJ			= $(SRC:.cpp=.o)
HEADER		= AMateria.hpp Character.hpp Cure.hpp Ice.hpp IMateriaSource.hpp ICharacter.hpp MateriaSource.hpp

GREEN		=	\e[92;5;118m
YELLOW		=	\e[93;5;226m

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	@$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)
	@printf "$(GREEN) Interface is Ready \n"

clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) $(NAME)
	@printf "$(YELLOW) OBJ files removed \n"

re: fclean all