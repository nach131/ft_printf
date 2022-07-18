# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/12 19:20:00 by nmota-bu          #+#    #+#              #
#    Updated: 2022/07/18 11:34:06 by nmota-bu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
INCLUDES = inc
LIBFT		= libft/
SRC_DIR = src/
OBJ_DIR = obj/

# Compilate

CC= gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -f

# Colors
GREEN=\033[0;32m
BLUE=\033[0;34m
RED=\033[0;31m
YELLOW = \033[0;33m
WHITE= \033[0;37m

#Sources

PRINT_DIR = print/
PRINT_FILES = ft_print_hexa

SRC_FILES = ft_printf ft_intlen ft_search_arg ft_read_text
SRC_FILES += $(addprefix $(PRINT_DIR), $(PRINT_FILES))

SRCS = $(addprefix $(SRC_DIR), $(addsuffix .c, $(SRC_FILES)))
OBJS = $(addprefix $(OBJ_DIR), $(addsuffix .o, $(SRC_FILES)))

#Rules

all: DIR LIBFS $(NAME)

tokemo:
			@echo $(INCLUDES)/
			@cat $(INCLUDES)/ft_printf.h

LIBFS:
			@make -C $(LIBFT)

$(NAME) : $(OBJS)
			@cp libft/libft.a .
			@mv libft.a $(NAME)
			@$(AR) $(NAME) $(OBJS)
			@echo "$(GREEN)\n ✓ Creado $(NAME)\n$(WHITE)"

$(OBJ_DIR)%.o : $(SRC_DIR)%.c $(INCLUDES)/ft_printf.h
			@echo "$(BLUE) Compilando  ➟  $< $(WHITE)"
			@$(CC) $(CFLAGS) -I$(INCLUDES) -Ilibft/inc -c $< -o $@

DIR:
			@mkdir -p $(OBJ_DIR)
			@mkdir -p $(OBJ_DIR)$(PRINT_DIR)

clean : 
			echo $(OBJS)
			@$(RM) -r $(OBJ_DIR)
			@make clean -C $(LIBFT)
			@echo "$(RED)\n ✗ ft_printf borrados.‼️\n$(WHITE)";

fclean : clean
			@$(RM) $(NAME)
			@make fclean -C $(LIBFT)
			@$(RM) -f $(LIBFT)/libft.a

			@echo "$(YELLOW) Todo Super limpito...✌🏼$(WHITE)"

re: fclean all
			@echo "$(YELLOW) Borrado todo y recompilado...✌🏼$(WHITE)"

norm:
			@norminette $(SRCS) $(INCLUDES) | grep -v Norme -B1 || true

# Non-file targets
.PHONY: all clean fclean re norm
