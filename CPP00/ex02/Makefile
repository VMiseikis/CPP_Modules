# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vmiseiki <vmiseiki@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/03 15:19:46 by vmiseiki          #+#    #+#              #
#    Updated: 2022/03/03 15:19:47 by vmiseiki         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


# Color codes
RESET	= \033[0m
GREEN	= \033[32m
YELLOW	= \033[33m
BLUE	= \033[34m

# Name of the program
NAME = account

# Compilation flags
CC		= clang++
CFLAGS	= -Wall -Wextra -Werror -std=c++98

# Source files
SRC = tests.cpp Account.cpp

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
