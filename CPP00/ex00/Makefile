# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jbadia <jbadia@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/11 09:35:55 by jbadia            #+#    #+#              #
#    Updated: 2022/04/11 10:12:05 by jbadia           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CBOLD   = \033[1m
CITALIC = \033[3m
CBLUE   = \033[34m
CVIOLET = \033[35m
NORMAL 	= \033[0m
CBLUEBG   = \033[44m
CVIOLETBG = \033[45m
CWHITEBG  = \033[47m
CGREEN2  = \033[92m

NAME = MegaPhone

CC = clang++
FLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf
OBJ = obj

SRC_C = megaphone.cpp 

OBJS = $(addprefix $(OBJ)/, $(SRC_C:.cpp=.o))

$(OBJ)/%.o:	%.cpp
	@${CC} ${FLAGS} -c -I. $< -o $@


${NAME} : ${OBJ} ${OBJS}
	${CC} ${OBJS} -o ${NAME}
	@echo "$(CBOLD)$(CBLUE) COMPILED $(NORMAL)"

${OBJ}:
	@mkdir -p ${OBJ}

all: ${NAME}

clean :
	@$(RM) $(OBJS)
	@echo "$(CBOLD)$(CGREEN2) CLEANED $(NORMAL)"

fclean : clean
	@$(RM) ${OBJ} $(NAME)

re : fclean all

.PHONY: all clean fclean re