# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cauvray <cauvray@student.42lehavre.fr>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/26 08:36:24 by cauvray           #+#    #+#              #
#    Updated: 2025/02/22 17:03:21 by cauvray          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# *** Compilation
NAME		=	fragtrap_prog
CC			=	c++
CFLAGS		=	-Wall -Wextra -Werror -Wshadow -std=c++98

# *** Files
_FILES		=	main ClapTrap ScavTrap FragTrap
FILES		=	$(addsuffix .cpp, $(_FILES))

OBJS_DIR	=	objs
OBJS_FILES	=	$(FILES:.cpp=.o)
OBJS		=	$(addprefix $(OBJS_DIR)/, $(OBJS_FILES))

# *** Includes
INC_DIRS	=	.
INC_FLAGS	=	$(addprefix -I, $(INC_DIRS))

# *** Colors & Messages
GREEN		=	\033[0;32m
CYAN		=	\033[0;36m
RESET		=	\033[0m
GRAY		=	\033[90m

SUCCESS		=	$(GREEN)[SUCCESS]$(RESET)
INFO		=	$(CYAN)[INFO]$(RESET)

# *** Rules
all: $(NAME)

$(OBJS_DIR):
	@if [ ! -d ./$(OBJS_DIR) ]; then \
		echo "$(INFO) Creating $(OBJS_DIR) directory..."; \
		echo "$(GRAY)mkdir -p $(OBJS_DIR)"; \
		mkdir -p $(OBJS_DIR); \
	fi

$(OBJS_DIR)/%.o: %.cpp | $(OBJS_DIR)
	@echo "$(INFO) Compiling $<...$(GRAY)"
	$(CC) $(CFLAGS) $(INC_FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	@echo "$(INFO) Compiling $(NAME)... $(GRAY)"
	$(CC) $(CFLAGS) $(INC_FLAGS) $^ -o $@
	@echo "$(SUCCESS) $(NAME) compiled."

clean:
	@echo "$(INFO) Removing $(OBJS_DIR)...$(GRAY)";
	rm -rf $(OBJS_DIR)
	@echo "$(SUCCESS) Objects removed."

fclean: clean
	@echo "$(INFO) Removing $(NAME)...$(GRAY)"
	rm -f $(NAME)
	@echo "$(SUCCESS) $(NAME) removed."

re: fclean all

.PHONY: all clean fclean re
