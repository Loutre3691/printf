NAME = libftprintf.a

SRC =	ft_printf.c \
		utils1.c \
		utils2.c 


OBJ = $(SRC:%.c=$(OBJ_DIR)/%.o)
OBJ_DIR = OBJ
CC = cc
CFLAGS =  -Wall -Wextra -Werror
AR = ar -rcs #manipule des archives r = replace, c = cree, s = index

#regle par defaut
all : $(NAME)
	
$(NAME) : $(OBJ)
	$(AR) $(NAME) $(OBJ)

$(OBJ_DIR)/%.o:%.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@
	
$(OBJ_DIR) :
	mkdir -p $(OBJ_DIR)

test :
	make && $(CC) $(CFLAGS) main.c libft.a && ./a.out

#nettoyage des fichiers objets	
clean :
	rm -rf $(OBJ_DIR) 

#nettoyage complet (fichiers objets et executables)
fclean : clean
	rm -f $(NAME) 

#refaire la compilation
re: fclean all

#s'assure qu'il cherche les comm du makefile
.PHONY : all clean fclean re test