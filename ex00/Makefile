# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bfleitas <bfleitas@student.42luxembourg    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/15 16:12:26 by bfleitas          #+#    #+#              #
#    Updated: 2025/02/15 19:17:37 by bfleitas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

COMPILER = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf

SRCS = $(wildcard *.cpp)
OBJS = $(SRCS:.cpp=.o)

NAME = zombie

all: $(NAME)

%.o: %.cpp
	$(COMPILER) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(COMPILER) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re