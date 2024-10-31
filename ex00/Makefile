# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ozahidi <ozahidi@student.1337.ma>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/31 12:27:06 by ozahidi           #+#    #+#              #
#    Updated: 2024/10/31 12:27:57 by ozahidi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CPP = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

NAME = animal

SRCS =  Dog.cpp main.cpp  Cat.cpp Animal.cpp

OBJS = ${SRCS:.cpp=.o}


BLUE = \033[0;34m
GREEN = \033[0;32m
RESET = \033[0m

%.o: %.cpp Dog.hpp Cat.hpp Animal.hpp
	@${CPP} ${FLAGS} -c $< -o $@

all : ${NAME}

${NAME} : ${OBJS}
	@echo "$(BLUE)╔═══════════════════════════════════════╗$(RESET)"
	@echo "$(BLUE)║     Compiling animal...               ║$(RESET)"
	@echo "$(BLUE)╚═══════════════════════════════════════╝$(RESET)"
	@${CPP} ${FLAGS} ${OBJS} -o ${NAME}
	@echo "$(GREEN)✔ Compilation successful!$(RESET)"
	@echo "$(GREEN)✔ Executable '$(NAME)' is ready.$(RESET)"

clean:
	@echo "$(BLUE)╔═══════════════════════════════════════╗$(RESET)"
	@echo "$(BLUE)║     Cleaning object files...          ║$(RESET)"
	@echo "$(BLUE)╚═══════════════════════════════════════╝$(RESET)"
	@rm -rf ${OBJS}
	@echo "$(GREEN)✔ Object files cleaned.$(RESET)"

fclean: clean
	@echo "$(BLUE)╔═══════════════════════════════════════╗$(RESET)"
	@echo "$(BLUE)║     Removing executable...            ║$(RESET)"
	@echo "$(BLUE)╚═══════════════════════════════════════╝$(RESET)"
	@rm -rf ${NAME}
	@echo "$(GREEN)✔ Executable removed.$(RESET)"
	@echo "$(GREEN)✔ Full clean complete.$(RESET)"

re: fclean all

.PHONY : all clean fclean re