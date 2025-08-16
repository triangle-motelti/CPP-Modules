# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: motelti <motelti@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/16 19:49:51 by motelti           #+#    #+#              #
#    Updated: 2025/08/16 20:32:49 by motelti          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPPFLAGS = -Wall -Wextra -Werror -std=c++98
CC = c++
RM = rm -f

SRC = Account.cpp tests.cpp
OBJ = $(SRC:.cpp=.o)

NAME = account

all: $(NAME)

%.o: %.cpp
	$(CC) $(CPPFLAGS) -c $< -o $@ -MMD

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) -o $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ) $(OBJ:.o=.d)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

-include $(OBJ:.o=.d)