.PHONY: all, re, clean, fclean, lib

NAME = ft_retro

CC = clang++
CC_FLAGS = -Wall -Werror -Wextra --std=c++98

EXTLIB = -lncurses

SRC_NAME =	main.cpp	\
			Game.cpp	\
			AEntity.cpp	\
			ASpaceShip.cpp	\
			AEnemy.cpp	\
			Player.cpp	\
			AStaticObject.cpp	\
			AWeapon.cpp	\
			Projectile.cpp	\
			Rifle.cpp	\
			Vector2d.cpp	


OBJ_NAME =	$(SRC_NAME:.cpp=.o)
OBJ_PATH =	obj

OBJ = $(addprefix $(OBJ_PATH)/,$(OBJ_NAME))


all: message $(NAME)

message:
	@make -q $(NAME) && echo "\033[1mLe projet est deja a jour\033[0m" || true

$(NAME): $(OBJ)
	@ printf "\033[1mCompilation du projet \033[34m$@\033[0m \033[1men \033[31m$@\033[0m ✅\n"
	@ $(CC) $(CC_FLAGS) $(EXTLIB) $(OPTI_FLAG) -o $@ $(OBJ)

$(OBJ_PATH)/%.o: %.cpp
	@ mkdir $(OBJ_PATH) 2> /dev/null || true
	@ printf "\033[1mCompilation de \033[36m%-20s\033[37m\ten \033[32m%-20s\033[0m ✅\n" $< $@
	@ $(CC) $(CC_FLAGS) -c $< -o $@

clean:
	@ /bin/rm -rf $(OBJ_PATH)

fclean: clean
	@ /bin/rm -f $(NAME)

re: fclean all
