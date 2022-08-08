# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nmota-bu <nmota-bu@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/12 19:20:00 by nmota-bu          #+#    #+#              #
#    Updated: 2022/07/20 18:10:35 by nmota-bu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
INCLUDES = inc
LIBFT		= libft/
SRC_DIR = src/
OBJ_DIR = obj/

# Compilate

CC= gcc
CFLAGS = -Wall -Wextra -Werror -g3
AR = ar rcs
RM = rm -f

# Colors
GREEN=\033[0;32m
BLUE=\033[0;34m
ORANGE=\033[38;5;214m
RED=\033[0;31m
YELLOW = \033[0;33m
WHITE= \033[0;37m

#Sources

PRINT_DIR = print/
PRINT_FILES = ft_print_str ft_print_char \
			  ft_print_dec ft_print_unsint ft_print_ptr ft_print_hex

PUT_DIR = put/
PUT_FILES = ft_putstr ft_write

BONUS_DIR = bonus/
BONUS_FILES = ft_rep_write ft_constchar_to_str_bonus ft_memcpy_bonus

SRC_FILES = ft_printf ft_search_arg ft_read_text
SRC_FILES += $(addprefix $(PRINT_DIR), $(PRINT_FILES))
SRC_FILES += $(addprefix $(PUT_DIR), $(PUT_FILES))
SRC_FILES += $(addprefix $(BONUS_DIR), $(BONUS_FILES))

SRCS = $(addprefix $(SRC_DIR), $(addsuffix .c, $(SRC_FILES)))
OBJS = $(addprefix $(OBJ_DIR), $(addsuffix .o, $(SRC_FILES)))

#Rules

all: DIR LIBFS $(NAME)

bonus: all

LIBFS:
			@make -C $(LIBFT)

$(NAME) : $(OBJS)
			@cp libft/libft.a .
			@mv libft.a $(NAME)
			@$(AR) $(NAME) $(OBJS)
			@echo "$(GREEN)\n ✓ Creado $(NAME)\n$(WHITE)"

$(OBJ_DIR)%.o : $(SRC_DIR)%.c $(INCLUDES)/ft_printf.h
			@echo "$(ORANGE) Compilando  ➟  $(BLUE)$< $(WHITE)"
			@$(CC) $(CFLAGS) -I$(INCLUDES) -Ilibft/inc -c $< -o $@

DIR:
			@mkdir -p $(OBJ_DIR)
			@mkdir -p $(OBJ_DIR)$(PRINT_DIR)
			@mkdir -p $(OBJ_DIR)$(PUT_DIR)
			@mkdir -p $(OBJ_DIR)$(BONUS_DIR)

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
