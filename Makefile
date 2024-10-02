# Nom de la bibliothèque
NAME = libft.a

# Options du compilateur
CC = gcc
CFLAGS = -Wall -Wextra -Werror

# Liste des fichiers sources
SRCS = $(wildcard ft_*.c)

# Objets générés
OBJS = $(SRCS:.c=.o)

# Commande pour créer la bibliothèque statique
AR = ar rcs

# Règle par défaut : compile tout
all: $(NAME)

# Compilation de la bibliothèque
$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

# Nettoyage des fichiers objets
clean:
	rm -f $(OBJS)

# Nettoyage complet, y compris la bibliothèque
fclean: clean
	rm -f $(NAME)

# Recompile tout
re: fclean all
