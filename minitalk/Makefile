NAME_S = server
NAME_C = client

SRC_S = server.c
SRC_C = client.c ft_atoi.c

OBJ_S = $(SRC_S:.c=.o)
OBJ_C = $(SRC_C:.c=.o)

FTPRINTF := ft_printf/

MAKE_PRINTF = make -C $(FTPRINTF)

FLAGS = -Wall -Werror -Wextra
CC = gcc

all: $(NAME_S) $(NAME_C)

server: $(OBJ_S)
	$(MAKE_PRINTF)
	$(CC) $(FLAGS) $(SRC_S) ft_printf/libftprintf.a -o $(NAME_S)

client: $(OBJ_C)
	$(MAKE_PRINTF)
	$(CC) $(FLAGS) $(SRC_C) ft_printf/libftprintf.a -o $(NAME_C)

clean:
	make clean -C $(FTPRINTF)
	rm -f $(OBJ_S)
	rm -f $(OBJ_C)

fclean: clean
	make fclean -C $(FTPRINTF)
	rm -f $(NAME_S)
	rm -f $(NAME_C)

re:	fclean all clean
