NAME 			= push_swap
CFLAGS			= -Werror -Wall -Wextra -g3
CC 				= cc $(CFLAGS)

LIBFT			= lib/libft/libft.a
LIBFT_PATH		= lib/libft/

HEADER			= -I lib/libft/src -I src/

SRC_FILES		= main.c \
				  free_and_exit.c \
				  index.c \
				  stack_utils.c \
				  swap.c \
				  push.c \
				  rotate.c \
				  reverse_rotate.c \
				  sort_3.c \
				  sort.c \
				  position.c \
				  cost.c \
				  move.c

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
	clear && ./push_swap 5 4 3 2 1 0 89 49 -2 -323 -43 84 -10

.PHONY: all clean fclean re

test2: all
	$(eval ARG = $(shell shuf -i 0-100 -n 2))
	./push_swap $(ARG) | ./checker_linux $(ARG)
	@echo -n "Instructions: "
	@./push_swap $(ARG) | wc -l

test3: all    
	$(eval ARG = $(shell shuf -i 0-100 -n 3))
	./push_swap $(ARG) | ./checker_linux $(ARG)
	@echo -n "Instructions: "
	@./push_swap $(ARG) | wc -l

test10: all    
	$(eval ARG = $(shell shuf -i 0-100 -n 10))
	./push_swap $(ARG) | ./checker_linux $(ARG)
	@echo -n "Instructions: "
	@./push_swap $(ARG) | wc -l

test100: all
	$(eval ARG = $(shell shuf -i 0-5000 -n 100))
	./push_swap $(ARG) | ./checker_linux $(ARG)
	@echo -n "Instructions: "
	@./push_swap $(ARG) | wc -l

test500: all    
	$(eval ARG = $(shell shuf -i 0-5000 -n 500))
	./push_swap $(ARG) | ./checker_linux $(ARG)
	@echo -n "Instructions: "
	@./push_swap $(ARG) | wc -l

mytest500: all    
	$(eval ARG = $(shell shuf -i 0-5000 -n 500))
	./push_swap $(ARG) | ./checker $(ARG)
	@echo -n "Instructions: "
	@./push_swap $(ARG) | wc -l