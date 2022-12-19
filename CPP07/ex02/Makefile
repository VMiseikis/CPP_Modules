# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vmiseiki <vmiseiki@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/03 14:52:22 by vmiseiki          #+#    #+#              #
#    Updated: 2022/05/26 22:28:47 by vmiseiki         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Color codes
RESET	= \033[0m
GREEN	= \033[32m
YELLOW	= \033[33m
BLUE	= \033[34m

# Name of the program
NAME = ex02

# Compilation flags
CC		= g++
CFLAGS	= -Wall -Wextra -Werror -std=c++98

# Source files
SRC = main.cpp

# Compilation rules
all: $(NAME)

$(NAME): $(SRC)
	@echo "$(YELLOW)----- Compiling. Please Wait! -----$(RESET)"
	@$(CC) $(CFLAGS) -o $@ $^
	@echo "$(GREEN)----- Compilation completed!  -----$(RESET)"

clean:
	@rm -f $(NAME)

fclean:
	@rm -f $(NAME)
	@rm -f *.obj

re: fclean all

.PHONY: all clean fclean re
