NAME 			= push_swap
CFLAGS			= -Werror -Wall -Wextra -g3
CC 				= cc $(CFLAGS)

LIBFT			= lib/libft/libft.a
LIBFT_PATH		= lib/libft/

HEADER			= -I lib/libft/src -I src/

SRC_FILES		= main.c free_and_exit.c index.c stack_utils.c
OBJ_FILES		= $(SRC_FILES:%.c=%.o)

SRC_FOLDER 		= src/
OBJ_FOLDER		= obj/

SRC 			= $(addprefix $(SRC_FOLDER), $(SRC_FILES))
OBJ				= $(addprefix $(OBJ_FOLDER), $(OBJ_FILES)) 

all: libft $(NAME)

libft:
	@make -C $(LIBFT_PATH) --silent

$(NAME): $(OBJ)
	$(CC) $(OBJ) $(LIBFT) $(HEADER) -o $(NAME)

$(OBJ_FOLDER)%.o: $(SRC_FOLDER)%.c
	@mkdir -p $(OBJ_FOLDER)
	$(CC) $< -o $@ -c $(HEADER)

# utils 
clean:
	@rm -rf obj
	@rm -rf obj_bonus
	@make -C $(LIBFT_PATH) clean

fclean: clean
	@rm -rf obj
	@rm -rf obj_bonus
	@rm -rf push_swap
	@rm -rf push_swap_bonus
	@make -C $(LIBFT_PATH) fclean

re: fclean all

test: all
	./push_swap 3 1 2

.PHONY: all clean fclean re