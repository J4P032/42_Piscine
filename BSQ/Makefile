# Nombre del programa
NAME = bsq

# Archivos fuente
SRC = check_map_error.c check_matrix.c ft_atoi.c ft_sqrt.c ft_strlen.c get_solution.c main.c map_instructions.c map_to_matrix.c read_map.c

# Archivos objeto generados
OBJ = $(SRC:.c=.o)

# Archivos de dependencias generados
DEPS = $(OBJ:.o=.d)

# Compilador y banderas
CC = gcc
CFLAGS = -Wall -Wextra -Werror -MMD

# Regla principal: compilar el programa
all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

# Regla para compilar archivos .c a .o
%.o: %.c squaredgame.h
	$(CC) $(CFLAGS) -c $< -o $@

# Incluir archivos de dependencias, si existen
-include $(DEPS)

# Limpiar archivos objeto y dependencias
clean:
	rm -f $(OBJ) $(DEPS)

# Limpiar todo (archivos objeto, dependencias y ejecutable)
fclean: clean
	rm -f $(NAME)

# Reconstruir todo desde cero
re:
	make fclean
	make

# No interpretar estos nombres como archivos
.PHONY: all clean fclean re

