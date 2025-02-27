# Nombre del programa
NAME = rush-02

# Archivos fuente
SRC = atoi_arg.c copystr.c dictionary.c main.c read_dictionary.c \
      read_sdict.c strlen.c take_dic_info.c

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
%.o: %.c numbers.h
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

