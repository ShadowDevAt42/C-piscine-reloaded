# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fdi-tria <fdi-tria@student.42lausanne.c    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/15 23:22:40 by fdi-tria          #+#    #+#              #
#    Updated: 2024/09/30 01:37:36 by fdi-tria         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Variables
NAME = libft.a
SRC_DIR = srcs
INCLUDES_DIR = includes
SRC_FILES = ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c
OBJ_FILES = $(SRC_FILES:.c=.o)
CC = gcc
CFLAGS = -Wall -Wextra -Werror

# Règle principale pour compiler la bibliothèque
all: $(NAME)

# Création de la bibliothèque à partir des fichiers objets
$(NAME): $(OBJ_FILES)
	@ar rcs $(NAME) $(addprefix $(SRC_DIR)/, $(OBJ_FILES))
	@echo "Library $(NAME) created."

# Compilation des fichiers .o à partir des fichiers .c
%.o: $(SRC_DIR)/%.c
	@$(CC) $(CFLAGS) -I $(INCLUDES_DIR) -c $< -o $(SRC_DIR)/$@

# Nettoyage des fichiers objets
clean:
	@rm -f $(addprefix $(SRC_DIR)/, $(OBJ_FILES))
	@echo "Object files removed."

# Nettoyage complet (fichiers objets + bibliothèque)
fclean: clean
	@rm -f $(NAME)
	@echo "Library $(NAME) removed."

# Recompilation complète
re: fclean all

.PHONY: all clean fclean re
