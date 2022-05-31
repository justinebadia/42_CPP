# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jbadia <jbadia@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/23 19:34:43 by jbadia            #+#    #+#              #
#    Updated: 2022/05/31 10:38:28 by jbadia           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = convert

CC = c++
FLAGS = -g -Wall -Wextra -Werror -std=c++98
RM = rm -rf
OBJ = obj

SRC_C = main.cpp Convert.cpp
HDR_H =  Convert.hpp

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