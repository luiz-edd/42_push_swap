NAME 			= push_swap
CFLAGS			= -Werror -Wall -Wextra -g3
CC 				= cc $(CFLAGS)

LIBFT			= lib/libft/libft.a
LIBFT_PATH		= lib/libft/

HEADER			= -I lib/libft/src src/

SRC_FILES		= main.c 
OBJ_FILES		= $(SRC:%.C=%.o)

SRC_FOLDER 		= src/
OBJ_FOLDER		= obj/

SRC 			= $(addprefix $(SRC_FOLDER), $(SRC_FILES))
OBJ				= $(addprefix $(SRC_FOLDER), $(SRC_FILES)) 

all: libft $(NAME)

libft:
	@make -C $(LIBFT_PATH) --silent

$(NAME): $(OBJ)
	$(CC) $(OBJ) $(LIBFT) $(HEADER) -o $(NAME)

$(OBJ_FOLDER)%.o: $(SRC_FOLDER)%.c
	@mkdir -p $(OBJ_FOLDER)
	$(CC) $< -o $@ -c $(HEADER)