# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: kcabus <kcabus@student.le-101.fr>          +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2017/12/22 11:11:40 by kcabus       #+#   ##    ##    #+#        #
#    Updated: 2020/01/13 10:18:17 by kcabus      ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

NAME = megaphone

WFLAGS = -Wall -Wextra -Werror

OBJ = $(SRCS:.cpp=.o)

SRCS = megaphone.cpp

.PHONY: all clean fclean re

all : $(NAME)

$(NAME): $(OBJ)
	@clang++ $(WFLAGS) $(OBJ) -o $(NAME)

clean :
	@rm -f $(OBJ)

fclean : clean
	@rm -f $(NAME)

re : fclean clean all

%.o: %.c $(HEADER)
	clang++ -c $< -o $@ $(WFLAGS)
