# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jbadia <jbadia@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/01 09:27:24 by jbadia            #+#    #+#              #
#    Updated: 2022/06/10 13:51:51 by jbadia           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = span

CC = c++
FLAGS = -g -Wall -Wextra -Werror -std=c++98
RM = rm -rf 
OBJ = obj

SRC_C = main.cpp Span.cpp
HDR_H = Span.hpp

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