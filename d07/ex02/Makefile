# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: kcabus <kcabus@student.le-101.fr>          +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2017/12/22 11:11:40 by kcabus       #+#   ##    ##    #+#        #
#    Updated: 2020/01/22 13:42:48 by kcabus      ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

NAME = array

WFLAGS = -Wall -Wextra -Werror

OBJ = $(SRCS:.cpp=.o)

SRCS =	main.cpp

.PHONY: all clean fclean re

all : $(NAME)

$(NAME): $(OBJ)
	@clang++ $(WFLAGS) $(OBJ) -o $(NAME)

clean :
	@rm -f $(OBJ)

fclean : clean
	@rm -f $(NAME)

re : fclean clean all

%.o: %.cpp $(HEADER)
	clang++ -c $< -o $@ $(WFLAGS)
