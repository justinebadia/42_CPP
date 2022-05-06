# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jbadia <jbadia@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/02 09:01:33 by jbadia            #+#    #+#              #
#    Updated: 2022/05/06 13:21:21 by jbadia           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Bureaucrat

CC = c++
FLAGS = -g -Wall -Wextra -Werror -std=c++98
RM = rm -rf
OBJ = obj

SRC_C = main.cpp Bureaucrat.cpp Form.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp Intern.cpp
HDR_H = Bureaucrat.hpp Form.hpp PresidentialPardonForm.hpp ShrubberyCreationForm.hpp RobotomyRequestForm.hpp Intern.hpp

OBJS = $(addprefix $(OBJ)/, $(SRC_C:.cpp=.o))

$(OBJ)/%.o: %.cpp
	$(CC) $(FLAGS) -c -I. $< -o $@

$(NAME) : $(OBJ) $(OBJS)
	$(CC) $(OBJS) -o $(NAME)

$(OBJ):
	mkdir -p $(OBJ)

all : $(NAME)

clean :
	$(RM) $(OBJ)

fclean : clean	
	$(RM) $(OBJ) $(NAME)

re: fclean all 

.PHONY: all clean fclean re