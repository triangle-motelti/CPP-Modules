
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
CC = c++
RM = rm -f

SRC = main.cpp Harl.cpp
OBJ = $(SRC:.cpp=.o)

NAME = harl

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
