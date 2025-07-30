# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: myuen <myuen@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/17 14:53:29 by myuen             #+#    #+#              #
#    Updated: 2025/07/30 16:18:10 by myuen            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = 03
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -Iinc -g -MMD -MP -pedantic -Wshadow

SRC_DIR = src
OBJ_DIR = obj

SRCS = $(SRC_DIR)/main.cpp \
       $(SRC_DIR)/ClapTrap.cpp \
	   $(SRC_DIR)/ScavTrap.cpp \
	   $(SRC_DIR)/FragTrap.cpp \
	   $(SRC_DIR)/DiamondTrap.cpp

OBJS = $(SRCS:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)
DEPS = $(OBJS:.o=.d)

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

# Compile each .cpp to .o
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

-include $(DEPS)

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re